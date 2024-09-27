// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     string a,b;
//     cin>>a>>b;
//     for(int i = 0 ; i<=a.size(); i++){
//         if(a[i]>'z'){
//             //a[i]= a[i]-32;
//             a[i] = (char)tolower(a[i]);
//         }
//         if(b[i]>'z'){
//             //b[i]= b[i]-char(32);
//             b[i] = (char)tolower(b[i]);
//         }
//     }
//     cout<<a<<" "<<b;
//     if(a==b){
//         cout<<"0"<<endl;
//     }
//     // for(int i = 0 ; i<=a.size(); i++){
//     //     if(a[i]!=b[i]){
//     //         if(a[i]>b[i]){
//     //         cout<<"1"<<endl;
//     //         }
//     //         else if(a[i]<b[i]) {
//     //             cout<<"-1"<<endl;
//     //         }
//     //         break;
//     //     }
//     // }
//     if(a>b){
//         cout<<"1"<<endl;
//     }else if(b>a){
//         cout<<"-1"<<endl;
//     }else cout<<"0"<<endl;


    
// }




#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 < s2) {
        cout << -1 << endl; 
    } else if (s1 > s2) {
        cout << 1 << endl; 
    } else {
        cout << 0 << endl; 
    }
    return 0;
}
