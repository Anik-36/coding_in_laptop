#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v1(n);
        // vector<ll> v;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            // cin >> v1[i];
            ll x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ll x;
                cin >> x;
                s.insert(x);
            }
            // s.insert(v.begin(), v.end());
        }
        // for (auto x : s)
        // {
        //     cout << x << " ";
        // }
        cout << s.size() << endl;
    }
}