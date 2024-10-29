#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int* fun(){
    int *a = new int[5];
    //int a[5];
    for(int i = 0 ;i<5;i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int *a = fun();
    for(int i = 0 ; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a; 
    // after deleting it will not showing actuall values

    for(int i = 0 ; i<5; i++){
        cout<<a[i]<<" ";
    }

}