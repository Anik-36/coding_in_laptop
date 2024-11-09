#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
        int mx = INT_MIN, mx1 = INT_MIN, mn = INT_MAX, mn1 = INT_MAX;
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n; i++){
            cin>>a[i];
        }
        if(n>1){
            for(int i = 1; i<n; i++){
            mx = max(mx,a[i]);
            }
            int dm = (mx - a[0]); // 3
            for(int i = 0; i<n-1; i++){
                mx1 = max(mx,a[i]);
            }
            int dm1 = ( a[n-1] - mx1); // -3
            for(int i = 1; i<n; i++){
                mn = min(mn,a[i]);
            }
            int dn = (mn - a[0]); // 1
            for(int i = 0; i<n-1; i++){
                mn1 = min(mn1,a[i]);
            }
            int dn1 = (a[n-1] - mn1);
            int r = max({dm,dm1,dn,dn1});
            for(int i = 0 ; i<n-1; i++){
                int p = (a[i]-a[i+1]);
                r = max(r,p);
            }
            cout<<r<<endl;
        }else cout<<"0"<<endl;
    }
}










// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,mx = INT_MIN;
//         cin >> n;
//         int a[n];
//         for(int i = 0 ; i<n; i++){
//             cin>>a[i];
//         }
//         for(int i=1;i<n;i++){
//             mx = max(mx,(a[i]-a[0]));
//         }
//         for(int i=0;i<n-1;i++){
//             mx = max(mx,(a[n-1]-a[i]));
//         }
//         for(int i=0;i<n-1;i++){
//             mx = max(mx,(a[i]-a[i+1]));
//         }
//         if(n == 1) mx = 0;
//         cout << mx << endl;
//     }
// }