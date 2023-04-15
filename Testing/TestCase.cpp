#include <bits/stdc++.h>
#include <chrono>
#pragma GCC optimization ("unrolled-loops")

using namespace std;
using namespace std::chrono;

#define filename "TestCase"
#define endl '\n'
#define ll long long

mt19937 mt(time(nullptr));
mt19937_64 mt64(time(nullptr));

void FileInOut()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ofstream *fo = new ofstream (filename".inp");
  if(*fo)
    cout.rdbuf( fo->rdbuf() );
}
//*************************************************************



void Solve() {
  int n, q;

  n = 100000;
  q = 100000;

  cout << n << " " << q << endl;
  for(int i = 0; i < n; i ++) {
    cout << mt() % 1000000000 << " ";
  }
  cout << endl;

  for(int i = 0; i < q; i ++) {
    int u = 1 + mt() % n;
    int v = 1 + mt() % n;
    while(u == v)
      v = 1 + mt() % n;
    cout << u << " " << v << endl;
  }
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