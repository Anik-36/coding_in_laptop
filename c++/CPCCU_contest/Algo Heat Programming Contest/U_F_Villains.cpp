/*
https://vjudge.net/contest/715468#problem/F
*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    float c,w,p;
    cin>>c>>w>>p;
    float lagbo = c*p/100;
    lagbo = ceil(lagbo);
    int baki = lagbo-w;
    cout<<baki<<endl;
}