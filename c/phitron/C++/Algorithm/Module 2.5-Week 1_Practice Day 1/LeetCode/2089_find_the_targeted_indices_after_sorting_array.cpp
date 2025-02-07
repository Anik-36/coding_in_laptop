#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int a[]= {1,2,5,2,3};
    int n = sizeof(a)/sizeof(int);
    int ans;
    int target = 2;
    sort(a,a+n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    // int b[n]={};
    // int l = 0;
    // int u = n-1;
    // while(l<u){
    //     int m = (l+u)/2;
    //     if(a[m]>target){
    //         u = m;
    //     }else if(a[m]<target){
    //         l = m+1;
    //     }else{
    //         l = m;
    //     }
    //     ans = l;
    // }
    // if(a[l]==target){
    //     for(int i = 0, j = l; a[j]==target; j++,i++){
    //         b[i] = j;
    //     }
    // }
    // for(int i = 0; i<sizeof(b)/sizeof(b[0]); i++){
    //     cout<<b[i]<<" ";
    // }
}







class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int target) {
        int n = a.size();
        sort(a.begin(),a.end());
        vector<int> b;
        int ans;
        int l = 0;
        int u = n-1;
        while(l<u){
            int mid = (l+u)/2;
            if(a[mid]<target){
                l = mid + 1;
            }else if(a[mid]>target){
                u = mid;
            }else{
                l = mid;
            }
            ans = l;
        }
        if(a[l]==target){
            for(int i = l; a[i]==target; i++){
                b.pushback(i);
            }
        }
        return b;
    }
};