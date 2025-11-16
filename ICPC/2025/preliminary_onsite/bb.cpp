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
        int a, v, l, n;
        cin >> a >> v >> l >> n;
        cout << (v > n ? "YES" : "NO") << "\n";
    }
    return 0;
}