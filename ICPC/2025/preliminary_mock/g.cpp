#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int nct = 0;

        int l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < sz && s[i] == '\\' && s[i + 1] == '0')
            {
                break;
            }
            l++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i + 1 < sz && s[i] == '\\' && s[i + 1] == '0')
            {
                nct++;
                i++;
            }
            else
            {
                nct++;
            }
        }
        cout << nct + 1 << " " << l << "\n";
        // cout<< szz<<endl;
    }
}