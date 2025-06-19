/*Question: You are given two sorted arrays arr1 and arr2 in descending order. Your task is to merge these two arrays into a new array result using the merge sort technique, but Instead of merging the arrays in ascending order, you need to merge them in descending order to create the result array.

You cannot use stl sort function here
Marks: 20



Sample Input
Sample Output
4
8 6 4 2
4
7 5 3 1
8 7 6 5 4 3 2 1

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;cin>>n;
    int a[n+1];
    for(int i =0;  i<n; i++){
        cin>>a[i];
    }
    a[n] = INT_MIN;
    int m;cin>>m;
    int b[m+1];
    for(int i =0 ; i<m; i++){
        cin>>b[i];
    }
    b[m] = INT_MIN;
    int c[m+n];
    int lp = 0, rp = 0;
    for(int i = 0; i<m+n; i++){
        if(a[lp]>=b[rp]){
            c[i] = a[lp];
            lp++;
        }else{
            c[i] = b[rp];
            rp++;
        }
    }
    for(int i = 0; i<m+n; i++){
        cout<<c[i]<<" ";
    }

}