#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "Transmit"
#define endl '\n'
#define X first
#define Y second
#define ll long long
#define all(x) (x).begin(),(x).end()

mt19937 mt(time(nullptr));
mt19937_64 mt64(time(nullptr));

void FileInOut()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ifstream *fi = new ifstream (filename".inp");
  ofstream *fo = new ofstream (filename".out");
  if(*fi) {
    cin.rdbuf( fi->rdbuf() );
    cout.rdbuf( fo->rdbuf() );
  }

}
//*************************************************************

int n, q;
int p[100010];
vector<int> fact[100010];

// prime setup
bool nt[32032];
vector<int> v;
int lim = sqrt(1e9);
unordered_map<int, int> pr;

// dsu setup
int h[400010];
int par[400010];

int parent(int u) {
  if(u == par[u]) 
    return u;
  return par[u] = parent(par[u]);
}

void join(int u, int v) {
  u = parent(u);
  v = parent(v);

  if(par[u] == par[v])
    return;
  
  if(h[u] > h[v]) {
    par[v] = u;
    h[u] += h[v];
  } else {
    par[u] = v;
    h[v] += h[v];
  }
}

void unique_prime_factor(int i) {
	int x = p[i];
	for(int j = 0; j < v.size(); j ++) {
		if(x % v[j] == 0) {
			fact[i].push_back(v[j]);
			while(x % v[j] == 0)
				x /= v[j];
		}
		if(x == 1 || v[j] * v[j] > x)
			break;
	}
	if(x > 1) {
		fact[i].push_back(x);
	}
}

void preSolve() {
  for(int i = 2; i <= sqrt(lim); i ++) {
		if(!nt[i])
			for(int j = i * i; j <= lim; j += i)
				nt[j] = true;
	}
	for(int i = 2; i <= lim; i ++)
		if(!nt[i])
			v.push_back(i);
}

void Solve() {
  cin >> n >> q;
	for(int i = 0; i < n; i ++) {
		cin >> p[i];
		unique_prime_factor(i);
	}

	// mapping prime
  set<int> temp_s;
  vector<int> temp;
  for(int i = 0; i < n; i ++) {
    for(int x: fact[i])
      temp_s.insert(x);
  }
  temp.assign(temp_s.begin(), temp_s.end());
  for(int i = 0; i < temp.size(); i ++)
    pr[temp[i]] = i + n;
  
  // building graph
  for(int i = 0; i < n + temp.size(); i ++)
    h[i] = 1, par[i] = i;

  for(int i = 0; i < n; i ++) {
    for(int x: fact[i]) {
      int u = pr[x];

      join(i, u);
    }
  }

  for(int i = 0; i < n; i ++)
    par[i] = parent(i);

  // answering query
  for(int i = 0; i < q; i ++) {
    int u, v;
    cin >> u >> v;
    u --; v --;

    cout << (par[u] == par[v] ? "YES" : "NO") << endl;
  }

}

int32_t main()
{
  FileInOut();
  preSolve();

  int test = 1;
  // cin>>test;
  while(test--)
    Solve();
}