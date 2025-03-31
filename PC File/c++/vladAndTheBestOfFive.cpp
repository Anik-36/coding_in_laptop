#include<bits/stdc++.h>
int main(){
    int t, count_a = 0, count_b = 0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i = 0 ; i<s.length; i++){
            if(s[i]=='A'){
                count_a++;
            }else{
                count_b++;
            }
        }if(count_a>=count_b){
            cout<<"A"<<endl;
        }else cout<<"B"<<endl;
    }
}
