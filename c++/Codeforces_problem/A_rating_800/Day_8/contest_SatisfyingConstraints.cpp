#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, k=1 ;
    long long int x;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            cin>>x;
            if(a==1){
                if(k<x){
                    k=k+x;
                }else{
                    k=k;
                }
            }
            else if(a==2){
                if(k>x){
                    k=k-x;
                }else{
                    k=k;
                }
            }
            else if(a==3){
                if(k==x){
                    continue;
                    k++;
                }else{
                    k=k;
                }
            }
            else{
                k=0;
            }
        }
        cout<<k;
    }
    
}