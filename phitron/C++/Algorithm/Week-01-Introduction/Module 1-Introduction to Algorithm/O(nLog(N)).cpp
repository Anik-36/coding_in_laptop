#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n ; j*=2){

        }
    }
}

/*
    i   i*2
    1   2
    2   4
    3   8
    4   16
    5   32
    ...
    k+1  2^k

    2^k = n
    k = log2^n ~= log(n)

    time complexity = O(log(N))

    total O(Nlog(N))

*/