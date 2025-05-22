/*https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?leftPanelTabValue=PROBLEM*/

void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    reverseStack(s);
    stack<int> cp;
    while(!s.empty()){
        cp.push(s.top());
        s.pop();
    }
    cp.push(x);
    while(!cp.empty()){
        s.push(cp.top());
        cp.pop();
    }
}


/* always think like what we can solve with the recursion
1st we have to do with the single element. and pass the rest element into the recursion . and recursion can do for us. then what we have to do with the single element just do it. so the solution will be ready.
*/
