/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
Sample Output
5
10 20 30 40 50
50 40 30 20 10

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    queue<int> q;
    int n;
    cin>>n;
    while (n--){
        int x;
        cin>>x;
        q.push(x);
    }
    int sz = q.size();
    stack<int>s;
    while(sz--){
        s.push(q.front());
        q.pop();
    }
    int sz2 = s.size();
    while(sz2--){
        cout<<s.top()<<" ";
        s.pop();
    }

}