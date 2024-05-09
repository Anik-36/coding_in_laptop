#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0 ; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}