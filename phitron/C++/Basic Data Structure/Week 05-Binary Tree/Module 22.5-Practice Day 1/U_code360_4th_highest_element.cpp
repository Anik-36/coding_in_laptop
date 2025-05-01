//https://www.naukri.com/code360/problems/fourth-largest-element-in-the-array_1792782#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    if(n<4){
        cout<< -2147483648<<endl;
        return 0;
    }
    sort(a,a+n,greater<int>());
    // for(int i = 0; i<n; i++){
    //     cout<<a[i]<<endl;
    // }
    queue<int> q;
    for(int i = 0; i<n; i++){
        q.push(a[i]);
    }
    for(int i = 0 ; i<3; i++){
        q.pop();
    }
    cout<<q.front()<<endl;
    return 0;
}