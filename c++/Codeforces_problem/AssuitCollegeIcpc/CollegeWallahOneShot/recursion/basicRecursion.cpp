#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void greet(){
    int i;
    cout<<"Hey"<<i++<<endl;
    greet(); // infinity loop
}
int main(){
    greet();
}