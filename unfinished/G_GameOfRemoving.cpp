// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     int t;
//     int c =1;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         int b[n];
//         int count =0;
        
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//         }
//         for(int i=0; i<n; i++){
//             cin>>b[i];
//         }
//         for(int i=0; i<n; i++){
//             if(a[i]!=b[i]){
//                 count++;
//             }
//         }
//         cout<<"Case "<<c<<": "<<count<<endl;
//         c++;
//     }
// }

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int founder(int n, vector<int>& arrB, unordered_set<int>& store) {
    int s = -1;
    int e = -1;
    for (int i = 0; i < n; ++i) {
        if (s == -1 && store.find(arrB[i]) == store.end()) {
            s = i;
        }
        if (e == -1 && store.find(arrB[n - 1 - i]) == store.end()) {
            e = n - 1 - i;
        }
    }
    int count = 0;
    for (int i = s; i <= e; ++i) {
        count++;
    }
    return count;
}

int decoder(int n, vector<int>& arrA, vector<int>& arrB) {
    if (arrA == arrB) {
        return 0;
    }
    unordered_set<int> store;
    bool found = false;
    for (int i : arrB) {
        if (find(arrA.begin(), arrA.end(), i) != arrA.end()) {
            store.insert(i);
            found = true;
        }
    }
    if (found) {
        return founder(n, arrB, store);
    } else {
        return n;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        vector<int> arrA(n);
        vector<int> arrB(n);
        for (int j = 0; j < n; ++j) {
            cin >> arrA[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> arrB[j];
        }
        cout << "Case " << i << ": " << decoder(n, arrA, arrB) << endl;
    }
    return 0;
}