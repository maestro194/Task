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
  // ifstream *fi = new ifstream (filename".inp");
  ofstream *fo = new ofstream (filename".inp");
  if(*fo) 
    cout.rdbuf( fo->rdbuf() );

}
//*******************************************************



void Solve()
{
  int n;
  n = 100000;
  cout << n << endl;
  for(int i = 0; i < n; i ++)
    cout << 999000000 + mt() % 1000001 << " ";
  
}

int32_t main()
{
  FileInOut();

  int test = 1;
  // cin>>test;
  while(test--)
    Solve();
}