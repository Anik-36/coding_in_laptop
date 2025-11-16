#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));
        vector<ll> r(n, 0), c(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                r[i] ^= a[i][j];
                c[j] ^= a[i][j];
            }
        }

        ll sr = 0, sc = 0;
        for (ll x : r)
        {
            sr += x;
        }
        for (ll x : c)
        {
            sc += x;
        }
        ll ans = sr + sc;
        ll p = ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll cr = (sr - r[i]) + (sc - c[j]);
                if (cr < p)
                {
                    p = cr;
                }
            }
        }

        cout << p << "\n";
    }
}