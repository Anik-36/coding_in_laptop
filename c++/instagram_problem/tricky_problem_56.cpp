#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    string ans;
    int ct = 0;
    int ict = 0;
    for(int i = 0; i<a.size(); i++){
        if(a[i]-'0' >= 1 and a[i]-'0'<=9){
            ct = a[i]-'0';
            for(int j = i+2; a[j]!=']'; j++){
                b+=a[j];
                ict = j;
            }
            i = ict++;
            for(int j = 1; j<=ct; j++){
                ans+=b;
            }
            b.clear();
        }
        else if(a[i]>='a' and a[i]<='z'){
            ans.push_back(a[i]);
        }
    }
    cout<<ans<<endl;
}

// 3[a]2[bc]
// aaabcbc