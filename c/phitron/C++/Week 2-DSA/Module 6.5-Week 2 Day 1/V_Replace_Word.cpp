#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b = a;
    string e = "EGYPT";
    bool flag = false;
    for(int i = 0; i<a.size(); i++){
        if(a[i]=='E'){
            for(int j = i,k = 0; j<i+5,k<5; j++,k++){
                if(a[j]!=e[k]){
                    flag = false;
                    break;
                }else{
                    flag = true;
                }
            }
            if(flag==true){
                b.replace(i,5," ");
                i+=4;
            }
        }
    }
    cout<<b<<endl;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string a;
//     getline(cin, a); // Use getline to handle strings with spaces
//     string b = "EGYPT";
//     size_t pos = 0;

//     // Replace all occurrences of "EGYPT" with a single space
//     while ((pos = a.find(b, pos)) != string::npos) {
//         a.replace(pos, b.size(), " ");
//     }

//     cout << a << endl;
//     return 0;
// }
