#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int * a = new int[5];
    for(int i = 0; i<5; i++){
        cin>>a[i];
    }
    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }

    int * b = new int[7];
    for(int i = 0; i<5; i++){
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;

    cout<<endl;

    for(int i = 0; i<7; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // deleting array " a "
    delete[] a;

    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }

}