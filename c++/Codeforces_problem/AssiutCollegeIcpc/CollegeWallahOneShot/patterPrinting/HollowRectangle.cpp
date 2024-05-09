#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout<<"Enter the value of  n : ";
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==m || j==1 || j==n){
                cout<<"* ";
            }else cout<<"  ";
        }cout<<endl;
    }
}