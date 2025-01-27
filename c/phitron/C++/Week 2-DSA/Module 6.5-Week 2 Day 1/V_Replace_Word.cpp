#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    // string b = a;
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
                a.replace(i,5," ");
            }
        }
    }
    cout<<a<<endl;
}
