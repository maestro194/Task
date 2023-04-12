#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "TestCase"
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
vector<vector<pair<int, int>>> edge[400010];

// prime setup
bool nt[32032];
vector<int> v;
int lim = sqrt(1e9);

// dsu setup
int h[400010];
int d[400010];

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

		for(int u: fact[i])
			for(int v: fact[i])
				edge[u].emplace_back(v, i);
	}

	// building 



}

int32_t main()
{
  FileInOut();
  preSolve();

  int test = 1;
  cin>>test;
  while(test--)
    Solve();
}