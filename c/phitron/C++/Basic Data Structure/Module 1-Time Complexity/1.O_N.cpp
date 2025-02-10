#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i = 0;  i<n; i++){   // O(N)
        cin>>a[i];
    }
    for(int i = 0;  i<n; i++){   // O(N)
        sum += a[i];
    }
    cout<<sum<<endl;
}

// total complexity O(N)