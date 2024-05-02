#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t){
        cin>>s;
        int count_a = 0, count_b = 0;
        int len = s.size();
        for(int i = 0 ; i<len; i++){
            if(s[i]=='A'){
                count_a++;
            }else{
                count_b++;
            }
        }if(count_a>=count_b){
            cout<<"A"<<endl;
        }else cout<<"B"<<endl;

        t--;
    }
}
