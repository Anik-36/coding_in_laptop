#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;// 1234 789
    int remainder1 =0, remainder2 = 0, sum = 0;
    cin>>a>>b;
    a%=10;
    b%=10;
    sum = a + b;
    cout<<sum<<endl;
}