#include<bits/stdc++.h>
using namespace std;
//const int N = 1e8; // N!=1e9 because globaly array size is limited up to 1e8.
// const int N = 1e4;
// int a[N];
// int main(){
//     for(int i=0; i<4*N ; i++){ // illigal access of memory called run time error or segmentation fault .
//         a[i] = i;
//     }
//     cout<<a[N-1]<<endl;
// }
int main(){
    int a = 4/0;
    cout<<a;
}