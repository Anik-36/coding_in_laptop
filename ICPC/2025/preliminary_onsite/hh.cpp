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
        ll n, m;
        cin >> n >> m;

        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }

        vector<array<ll, 3>> rul(m);
        for (int i = 0; i < m; i++)
        {
            cin >> rul[i][0] >> rul[i][1] >> rul[i][2];
        }

        bool fl = true;

        while (fl)
        {
            fl = false;
            for (auto &r : rul)
            {
                ll x = r[0], y = r[1], z = r[2];
                if (s.count(x) && s.count(y) && !s.count(z))
                {
                    s.insert(z);
                    fl = true;
                }
            }
        }

        cout << s.size() << "\n";
    }
}