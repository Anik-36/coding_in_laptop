#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int f=1;
    for(int i=1 ; i<n; i++){
        if(n%i==0){
            // cout<<i<<" "; for all factor number
            f=i;// for max factor number
        }
    }
    cout<<f;
    return 0;
}