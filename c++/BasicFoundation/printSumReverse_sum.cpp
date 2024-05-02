#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , rev = 0 , temp ;
    cout<<"Enter the number of n : ";
    cin>>n;
    temp = n;
    while(n!=0){
        int mod = n%10;
        rev =  rev*10 + mod;
        n/=10;
    }
    cout<<rev<<endl;
    int sum =temp + rev;
    cout<<sum;
}