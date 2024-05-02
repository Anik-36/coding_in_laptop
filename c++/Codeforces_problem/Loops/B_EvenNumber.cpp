#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 1)
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << endl;
        }
    }
    else
        cout << -1 << endl;
}