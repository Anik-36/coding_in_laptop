/*
Question: Write a C++ program that takes N integer numbers that are sorted and distinct. The next line will contain an integer k. You need to tell whether K exists in that array or not. If it exists, print its index otherwise print “Not Found”.
You must solve this in O(logn) complexity.
Marks: 20



Sample Input
Sample Output
8
-4 0 2 6 9 10 29 54
29
6
10
0 1 2 3 4 5 6 7 8 9
-3
Not Found

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int x;cin>>x;
    int l = 0, r = n-1;
    while(l<r){
        int mid = (l+r)/2;
        if(x<=a[mid]){
            if(x == a[mid]){
                cout<<mid<<endl;
                break;
            }else{
                r = mid-1;
            }
        }else{
            l = mid+1;
        }
    }
}