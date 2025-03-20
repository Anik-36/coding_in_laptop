/*Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
10 20 30 40 50
*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    stack<int> s;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.push(x);
    }
    int sz = s.size();
    stack<int> s2;
    while(sz--){
        s2.push(s.top());
        s.pop();
    }
    int sz2 = s2.size();
    while(sz2--){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}