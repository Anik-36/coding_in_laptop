#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        int sum1 = 0 , sum2 = 0;
        cin>>a;
        for(int i = 0 ; i<6 ; i++){
            if(i<3){
                sum1 = sum1 + int(a[i]);
            }else{
                sum2 = sum2 + int(a[i]);
            }
        }
        if(sum1 == sum2) yes
        else no
    }
}