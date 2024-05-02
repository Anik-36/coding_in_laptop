#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int x = 4 ;
    int *p_x = &x;
    cout<<"Address of x = "<<&x<<endl;
    cout<<"value of p_x = "<<p_x<<endl;
    cout<<"value of *p_x = "<<*p_x<<endl;
    *p_x = 6;
    cout<<"x = "<<x<<endl;
    cout<<"p_x +1 = "<<p_x+1<<endl;
    int **p_p_x = &p_x;
    cout<<"Address of p_x = "<<&p_x<<endl;
    cout<<"value of p_p_x = "<<p_p_x<<endl;
    cout<<"value of *p_p_x = "<<*p_p_x<<endl;
    cout<<"value of **p_p_x = "<<**p_p_x<<endl;
    **p_p_x = 8;
    cout<<"x = "<<x<<endl;
}