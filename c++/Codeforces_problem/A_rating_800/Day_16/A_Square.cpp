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
        int a1,a2,a3,a4,b1,b2,b3,b4 , l = 0, area ;
        cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
        if(a1==a2){
            l = max(b1,b2) - min(b1,b2);
        }
        else if(a1==a3){
            l = max(b1,b3) - min(b1,b3);
        }
        else{
            l = max(b1,b4) - min(b1,b4);
        }
        area = l*l;
        cout<<area<<endl;
    }
}