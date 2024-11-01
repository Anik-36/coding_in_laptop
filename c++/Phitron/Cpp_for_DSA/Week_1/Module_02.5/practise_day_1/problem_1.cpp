#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int* get_array(int n){
    int * a = new int[n];
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int * b = get_array(n);
    for(int i = 0 ; i<n; i++){
        cout<<b[i]<<" ";
    }

}