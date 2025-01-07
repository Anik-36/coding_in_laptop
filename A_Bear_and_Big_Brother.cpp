#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int year = 0;
    while(a<=b){
        a*=3;
        b*=2;
        year++;
    }
    cout<<year<<endl;
}