#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[] = { 2,3,5 ,6 ,19,48,4};
    int n = sizeof(a)/4;
    for(int i=0 ; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for(int j=0 ; j<n; j++){
        cout<<a[j]<<" ";
    }
}
    