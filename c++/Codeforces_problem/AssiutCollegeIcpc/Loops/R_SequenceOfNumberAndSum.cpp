#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void maxi(int* x, int* y){
    int temp = *x;
    *x = *y ;
    *y = temp;
}
void print(int a, int b){
    int sum = 0;
    if(a>b){
        maxi(&a,&b);
    }
    for(int i=a ; i<=b; i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    while(n>0 && m>0){
        print(n,m);
        cin>>n>>m;
    }
}