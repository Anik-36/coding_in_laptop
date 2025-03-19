/*Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

Sample Input
Sample Output
5
10 20 30 40 50
5
10 20 30 40 50
NO
5
10 20 30 40 50
4
10 20 30 40
NO
5
10 20 30 40 50
5
50 40 30 20 10
YES

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> st;
    while(n--){
        int x;
        cin>>x;
        st.push(x);
    }
    int sz1 = st.size();
    int m;
    cin>>m;
    queue<int> q;
    while(m--){
        int x;
        cin>>x;
        q.push(x);
    }
    int sz2 = q.size();
    bool flag = true;
    if(sz1 == sz2){
        n = sz2;
        while(n--){
            if(q.front() != st.top()){
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag == true){
            yes
        }else{
            no
        }
    }else{
        no
    }

}
