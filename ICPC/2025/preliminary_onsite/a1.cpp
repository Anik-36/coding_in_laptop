#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string a;
    cin >> a;
    int q;
    cin >> q;

    vector<long long> p10(n + 2);
    p10[0] = 1;
    for (int i = 1; i <= n; i++)
        p10[i] = (p10[i - 1] * 10) % MOD;

    int cntNZ = 0;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != '0')
        {
            cntNZ++;
            pos = n - i;
        }
    }

    while (q--)
    {
        int p, d;
        cin >> p >> d;
        int idx = n - p;
        int old = a[idx] - '0';

        if (old != 0)
            cntNZ--;
        a[idx] = char('0' + d);
        if (d != 0)
        {
            cntNZ++;
        }

        if (d != 0)
            pos = p;
        else
        {
            if (cntNZ == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != '0')
                    {
                        pos = n - i;
                        break;
                    }
                }
            }
        }

        if (cntNZ != 1)
        {
            cout << 0 << "\n";
            continue;
        }

        if (pos == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << p10[pos - 1] << "\n";
        }
    }

    return 0;
}