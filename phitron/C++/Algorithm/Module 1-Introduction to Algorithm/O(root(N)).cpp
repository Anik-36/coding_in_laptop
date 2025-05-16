#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int p = 0;
    for(int i = 0; p<=n; i++){
        //some statement
    }
}

/*
    i   p
    0   0
    1   1
    2   1+2
    3   1+2+3
    4   1+2+3+4
    5   1+2+3+4+5
    k   1+2+3+..+k


    p<=N
    = 1+2+3+..+k <= N
    = k(k+2)/2 <= N
    = k^2 <=N
    = k <= sqrt(N)
*/