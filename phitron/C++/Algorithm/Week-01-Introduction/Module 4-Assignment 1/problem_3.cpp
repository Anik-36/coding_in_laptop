/*Question: You are given an array of N positive integers. The next line will contain an integer K. You need to tell whether there exists more than one occurrence of K in that array or not. If there exists more than one occurrence of K print YES, Otherwise print NO.
See the sample input-output for more clarification.
The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of K will exist.	 You must solve this in O(logn) complexity.
Marks: 20



Sample Input
Sample Output
7
1 3 4 6 6 9 17
6
YES
10
0 1 2 3 4 5 6 7 8 9
3
NO

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
    bool flag = false;
    while(l<=r){
        int mid = (l+r)/2;
        if(x<=a[mid]){
            if(x == a[mid]){
                if(mid>0 or mid<n-1){
                    if(a[mid-1] == x){
                        flag = true;
                    }
                    if(a[mid+1] == x){
                        flag = true;
                    }
                }
                break;
            }else{
                r = mid-1;
            }
        }else{
            l = mid+1;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}