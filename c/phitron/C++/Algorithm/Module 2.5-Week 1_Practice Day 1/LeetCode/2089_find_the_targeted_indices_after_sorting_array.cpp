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
    int target;
    cin>>target;
    sort(a,a+n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int> b;
    int l = 0;
    int u = n-1;
    while(l<u){
        int m = (l+u)/2;
        if(a[m]>target){
            u = m;
        }else if(a[m]<target){
            l = m+1;
        }else{
            l = m;
        }
        ans = l;
    }
    if(a[l]==target){
        for(int i = l; a[i]==target; i++){
            b.push_back(i);
        }
    }
    for(int i = 0; i<sizeof(b)/sizeof(b[0]); i++){
        cout<<b[i]<<" ";
    }
}






class Solution {
    public:
        vector<int> targetIndices(vector<int>& a, int target) {
            int n = a.size();
            sort(a.begin(),a.end());
            vector<int> b;
            int ans = -1;
            int l = 0;
            int u = n-1;
            while(l<=u){
                int mid = (l+u)/2;
                if(a[mid]>=target){
                    u = mid - 1;
                    if(a[mid]==target){
                        ans = mid;
                    }
                }else{
                    l = mid + 1;
                }
            }
            if(ans != -1){
                for(int i = ans ; i<a.size() and a[i]==target; i++){
                    b.push_back(i);
                }
            }
            return b;
        }
    };