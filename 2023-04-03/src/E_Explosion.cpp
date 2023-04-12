#include <bits/stdc++.h>
#pragma GCC optimization ("unrolled-loops")
using namespace std;

#define filename "Explosion"
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
//*************************************************************



void preSolve() {
  
}

void Solve() {
  int n;
	cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	vector<long long> L(n);
	vector<long long> R(n);

	for (int rot = 0; rot < 2; rot++) {
		vector<pair<long long, long long>> st;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			long long cnt = 1;
			while (!st.empty() && h[i] - cnt < st.back().first) {
				long long diff = st.back().first - (h[i] - cnt);
				sum += diff * st.back().second;
				cnt += st.back().second;
				st.pop_back();
			}
			if (cnt - 1 > h[i]) {
				long long extra = cnt - 1 - h[i];
				sum -= extra * (extra + 1) / 2;
				cnt = h[i];
			}
			L[i] = sum;
			st.emplace_back(h[i], cnt);
		}
		reverse(L.begin(), L.end());
		reverse(R.begin(), R.end());
		reverse(h.begin(), h.end());
		swap(L, R);
	}

	long long ans = (long long) 1e18;
	for (int i = 0; i < n; i++) {
		ans = min(ans, L[i] + R[i] + h[i]);
	}
	cout << ans;

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