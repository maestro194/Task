#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "Fibonacci"
#define endl '\n'
#define ll long long

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
//*******************************************************

ll f[50];
ll n, x, y;

void preSolve() {
  f[0] = f[1] = 1;
	for(int i = 2; i <= 45; i ++)
		f[i] = f[i - 1] + f[i - 2];
}

void Solve() {
  cin >> n >> x >> y;

	ll top = 1, left = 1, bottom = f[n], right = f[n + 1];
	ll cur = n;
	bool flag = 0;
	bool ans = 1;

	while(cur > 0) {
    // horizontal when there are more column than row
		if(flag == 0) { 
			if(right - f[cur] >= y)
				right -= f[cur --];
			else if(left + f[cur] <= y)
				left += f[cur --];
			else {
				ans = false;
				break;
			}
			flag = 1;
		} 
    // veritcal when there are more row than column
    else { 
			if(bottom - f[cur] >= x)
				bottom -= f[cur --];
			else if(top + f[cur] <= x)
				top += f[cur --];
			else {
				ans = false;
				break;
			}
			flag = 0;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;

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