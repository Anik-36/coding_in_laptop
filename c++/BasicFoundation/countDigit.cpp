#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , count=0 ;
    cout<<"Enter the number n : ";
    cin>>n;
    while(n!=0){
        n/=10;
        count+=1;
        
    }
    cout<<count;
}