#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int x;
    cin>>x;
    // getchar(); // for ignoring the newline as a input string after inputing any integer or decimal value
    cin.ignore(); // similar to getchar().
    string s;
    // cin.getline(); // used when char s[100]. for static string.
    getline(cin,s); // for dynamic string .
    cout<<x<<endl;
    cout<<s<<endl;
}