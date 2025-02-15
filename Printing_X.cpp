#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j and (i+j) !=(n/2)){
                cout<<"\\";
            }else if(i+j==n-1){
                if(i>j){
                    cout<<"/";
                }else{
                    cout<<"\\";
                }
            }else if(i==j and (i+j)==(n/2)){
                cout<<"x";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }
}