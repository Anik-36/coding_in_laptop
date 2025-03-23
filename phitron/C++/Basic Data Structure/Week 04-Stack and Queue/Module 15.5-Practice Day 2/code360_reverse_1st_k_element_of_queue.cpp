/*https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM*/

#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    queue<int> nq;
    stack<int> s;
    for(int i = 1; i<=k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        nq.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        nq.push(q.front());
        q.pop();
    }
    return nq;
}
