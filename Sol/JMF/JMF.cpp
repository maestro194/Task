#include <bits/stdc++.h>
using namespace std;

const int N = 100 + 1;
int a[N], b[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //freopen("jmf.inp", "r", stdin);
    //freopen("jmf.out", "w", stdout);


    int n, k, t, mx = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    for(int i = 1; i <= k; i++)
    {
        cin >> t;
        b[t] = 1;
    }

    bool flag = 0;

    for(int i = 1; i <= n; i++)
    {
        if(a[i] != mx) continue;
        if(b[i]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag) cout << "Yes";
    else cout << "No";
}
