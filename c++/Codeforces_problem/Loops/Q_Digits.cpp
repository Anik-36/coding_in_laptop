// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     int n, a, r;
//     cin>>a;
//     while(a!=0){
//         cin>>n;
//         if(n==0) cout<<0<<endl;
//          while(n!=0){
            
//             r = n%10;
//             if(r==0){
//                 cout<<"0 ";
//             }
//             else cout<<r<<" ";
//             n/=10;
//         }cout<<endl;
//         a--;
//     }
// }


#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n, a, r;
    cin>>a;
    while(a!=0){
        cin>>n;
        if(n==0) {
            cout<<0<<endl;
            a--;
            continue;
        }
        while(n!=0){
            
            r = n%10;
            if(r==0){
                cout<<"0 ";
            }
            else cout<<r<<" ";
            n/=10;
        }cout<<endl;
        a--;
    }
}

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; ++i) {
//         string x;
//         cin >> x;
        
//         reverse(x.begin(), x.end());

//         for (char c : x) {
//             cout << c << ' ';
//         }

//         cout << endl;
//     }

//     return 0;
// }