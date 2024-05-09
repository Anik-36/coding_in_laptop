#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int a2[10];
    for(int i = 0 , j=9; i<10 ; i++,j--){
        a[j] = a[i];
    }
    for(int i=0 ; i<10 ; i++){
        a[i] = a2[i];
    }
    for(int i= 0 ; i<9 ; i++){
        cout<<a[i]<<" ";
    }
}