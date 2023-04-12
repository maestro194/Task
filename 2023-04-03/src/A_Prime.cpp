#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "Prime"
#define endl '\n'
#define ll long long

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

long long power(long long a, long long n, long long mod) {
  long long res = 1;
  a = a % mod;
  
  while(n > 0) {
    if(n & 1)
      res = res * a % mod;
    n >>= 1;
    a = a * a % mod;
  }
  return res;
}

bool millerTest(long long d, long long n)
{
  // Pick a random number in [2..n-2]
  // Corner cases make sure that n > 4
  int a = 2 + mt64() % (n - 4);

  // Compute a^d % n
  int x = power(a, d, n);

  if (x == 1  || x == n-1)
    return true;

  // Keep squaring x while one of the following doesn't happen
  // (i)   d does not reach n-1
  // (ii)  (x^2) % n is not 1
  // (iii) (x^2) % n is not n-1
  while (d != n-1)
  {
    x = (x * x) % n;
    d *= 2;

    if (x == 1)      return false;
    if (x == n-1)    return true;
  }

  // Return composite
  return false;
}

// It returns false if n is composite and returns true if n
// is probably prime.  k is an input parameter that determines
// accuracy level. Higher value of k indicates more accuracy.
bool isPrime(long long n, int k)
{
  // Corner cases
  if (n <= 1 || n == 4)  return false;
  if (n <= 3) return true;

  // Find r such that n = 2^d * r + 1 for some r >= 1
  long long d = n - 1;
  while (d % 2 == 0)
    d /= 2;

  // Iterate given number of 'k' times
  for (int i = 0; i < k; i++)
    if (!millerTest(d, n))
      return false;

  return true;
}

void Solve()
{
  // number of iterations for the task, the higher the more accurate
	int iter = 10;
  long long n;
  cin >> n;

  cout << (isPrime(n, iter) ? "YES" : "NO");
}

int32_t main()
{
  FileInOut();

  int test = 1;
  // cin>>test;
  while(test--)
    Solve();
}