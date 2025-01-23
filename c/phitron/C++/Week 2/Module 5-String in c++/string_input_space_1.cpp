#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    char s[100];
    // cin>>s; // cin is as like as scanf. it will be terminated when it finds any space.


    // fgets(s,100,stdin); // if you give eneter , it takes the newline and print it and also count as a size.


    cin.getline(s,100); // cin.getline() is similar to fgets. but fgets take the newline but cin.getline() don't. so the newline problem is solved.


    cout<<s<<endl;
    cout<<strlen(s)<<endl;
}