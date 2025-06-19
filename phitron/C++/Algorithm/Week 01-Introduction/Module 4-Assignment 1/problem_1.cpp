/*
Question: Write a C++ program that takes N integer numbers and sorts them in non-increasing order using Merge Sort.
You can’t use any built-in function for sorting.
Marks: 20


Sample Input
Sample Output
7
1 2 9 4 0 2 5
9 5 4 2 2 1 0
6
5 3 -1 3 3 8
8 5 3 3 3 -1
*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void merge(int a[],int l,int r,int mid){
    int left_size = mid -l +1;
    int L[left_size+1] ;
    int right_size = r-mid;
    int R[right_size+1];

    for(int i = 0,j = l; j<=mid; i++,j++){
        L[i] = a[j];
    }
    L[left_size] = INT_MIN;
    for(int i = 0,j = mid+1; j<=r; i++,j++){
        R[i] = a[j];
    }
    R[right_size] = INT_MIN;


    int lp = 0,rp = 0;
    for(int i = l; i<=r; i++){
        if(L[lp]>=R[rp]){
            a[i] = L[lp];
            lp++;
        }else{
            a[i] = R[rp];
            rp++;
        }
    }
}
void ms(int a[],int l,int r){
    if(l == r) return;
    int mid = (l+r)/2;
    ms(a,l,mid);
    ms(a,mid+1,r);
    merge(a,l,r,mid);
}
int main(){
    int n;cin>>n;
    // vector<int> a(n);
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    ms(a,0,n-1);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}