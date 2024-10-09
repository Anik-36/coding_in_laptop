#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i = 0 ; i <a.size() ; i+=2){
        int j = i;
        while(j>0 && a[j-2]>a[j]){
            int temp = a[j];
            a[j] = a[j-2];
            a[j-2] = temp;
            j-=2;
        }
    }
    cout<<a<<endl;
}