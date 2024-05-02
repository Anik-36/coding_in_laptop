#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int y = a/365;
    cout<<y<<" years"<<endl;
    int remaindery = a % 365 ;
    int m = remaindery/30;
    cout<<m<<" months"<<endl;
    int remainderm = remaindery%30;
    cout<<remainderm<<" days"<<endl;
}