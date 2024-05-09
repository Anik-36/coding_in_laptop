#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    int f=1;
    for(int i=1 ; i<=a; i++){
        f*=i;
    }
    return f;
}
int ncr(int n, int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);

}
int npr(int n, int r){
    int a = fact(n);
    int b = fact(n-r);
    return a/b;
}
int main(){
    int n, r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    cout<<"The Permutation value is = "<<npr(n,r)<<endl;
    cout<<"The Combination value is = "<<ncr(n,r)<<endl;
}