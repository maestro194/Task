#include <bits/stdc++.h>
#include <chrono>
#pragma GCC optimization ("unrolled-loops")
using namespace std;
using namespace std::chrono;

#define filename ""
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

}

int32_t main()
{
  FileInOut();

  auto start_time = high_resolution_clock::now();

  int test = 1;
  // cin>>test;
  while(test--)
    Solve();

  auto end_time = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(end_time - start_time);

  // cout << endl;
  // cout << "Execution time: " << duration.count() << endl;
}