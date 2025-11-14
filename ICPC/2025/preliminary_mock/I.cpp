#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i - 1, k = i + 1; (j >= 0 or k < n); j--, k++)
            {
                if (j >= 0)
                {
                    if (v[j] >= v[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if (k < n)
                {
                    if (v[k] <= v[i])
                    {
                        flag = false;
                        break;
                    }
                }
                flag = true;
            }
            if (flag)
            {
                cout << "Case " << cs << ": " << i + 1 << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "Case " << cs << ": " << "Humanity is doomed!" << endl;
        }
        cs++;
    }
}