#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "Polish"
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

string s;
ll mod = 1e9 + 7;
stack<ll> st;
ll x, y;

void Solve()
{
	getline(cin, s);
  int i = 0;
  while(i < s.size()) {
    if(s[i] >= '0' && s[i] <= '9') {
      x = 0;
      while(i < s.size() && s[i] != ' ')
        x = x * 10 + (s[i ++] - '0');
      i ++;
      st.push(x % mod);
    } 
    else {
      switch (s[i]){
        case '+':
          x = st.top(); st.pop();
          y = st.top(); st.pop();
          st.push(((x + y) % mod + mod) % mod);
          break;
        case '-':
          x = st.top(); st.pop();
          y = st.top(); st.pop();
          st.push(((x - y) % mod + mod) % mod);
          break;
        case '*':
          x = st.top(); st.pop();
          y = st.top(); st.pop();
          st.push(((x * y) % mod + mod) % mod);
          break;
      }
      i += 2;
    }
  }

  cout << st.top();

}

int32_t main()
{
  FileInOut();

  int test = 1;
  // cin>>test;
  while(test--)
    Solve();
}