#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void print_n_times(int n, char c){
    if(n==0) return;
    cout<<c<<" ";
    print_n_times(n-1,c);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        print_n_times(n,c);
        cout<<endl;
    }
}