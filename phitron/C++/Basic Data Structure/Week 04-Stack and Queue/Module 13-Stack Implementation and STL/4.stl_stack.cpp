#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    stack<int> st;
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}