#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if((a==1 and b==2) or (a==2 and b==1)) cout<<"3"<<endl;
    else if((a==2 and b==3) or (a==3 and b==2)) cout<<"1"<<endl;
    else cout<<"2"<<endl;
}