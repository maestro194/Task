#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "TestCode"
#define endl '\n'
#define X first
#define Y second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ll long long
#define all(x) (x).begin(),(x).end()
#define BIT(x, i) (((x) >> (i)) & 1)
#define CBIT __builtin_popcount
#define gcd __gcd

void FileInOut()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  ifstream *fi = new ifstream (filename".inp");
  ofstream *fo = new ofstream (filename".out");
  if(*fi)
  {
    cin.rdbuf( fi->rdbuf() );
    cout.rdbuf( fo->rdbuf() );
  }

}
// unusual mod : 1000003999
// atan2(y, x): tinh goc tao boi oX va diem co toa do (x, y)

ll f[50];
ll n, x, y;

void In()
{
	cin >> n >> x >> y;
}

void Solve()
{
  In();

	f[0] = f[1] = 1;
	for(int i = 2; i <= 45; i ++)
		f[i] = f[i - 1] + f[i - 2];

	ll top = 1, left = 1, bottom = f[n], right = f[n + 1];
	ll cur = n;
	bool flag = 0;
	bool ans = 1;

	while(cur > 0) {
		if(flag == 0) { // horizontal
			if(right - f[cur] >= y)
				right -= f[cur --];
			else if(left + f[cur] <= y)
				left += f[cur --];
			else {
				ans = false;
				break;
			}
			flag = 1;
		} else { // veritcal
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

  int test = 1;
  cin>>test;
  while(test--)
    Solve();
}