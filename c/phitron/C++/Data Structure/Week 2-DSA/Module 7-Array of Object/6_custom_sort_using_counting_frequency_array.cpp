#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class CustomSort{
    public:
        char c;
        int cnt;
};
bool cmp(CustomSort a, CustomSort b){
    if(a.cnt>b.cnt) return true;
    else return false;
}
int main(){
    CustomSort fq[26];
    for(int i = 0 ; i<26; i++){
        fq[i].c = i+'a';
        fq[i].cnt = 0;
    }
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        char a;
        cin>>a;
        fq[a-'a'].cnt++;
    }

    sort(fq,fq+26,cmp);

    for(int i = 0 ; i<26; i++){
        if(fq[i].cnt>0){
            for(int j = 0 ; j<fq[i].cnt; j++){
                cout<<fq[i].c;
            }
        }
    }
}