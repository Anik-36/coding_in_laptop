/*https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=SUBMISSION*/

#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char> st;
	for(auto c : s){
		st.push(c);
	}
	string ns = "";
	while(!st.empty()){
		ns+=st.top();
		st.pop();
	}
	return ns;
}
