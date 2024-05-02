#include<bits/stdc++.h>
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string c;
        cin>>c;
        // if((c=="YES") or (c=="Yes") or (c=="YEs") or (c=="yES") or(c=="yeS") or (c=="yes")or (c=="YeS") or (c=="yEs")){
        //     yes
        // }else no
        int count = 0 ;
            if(c[0]=='Y' or c[0]=='y'){
                count++;
            }if(c[1]=='E' or c[1]=='e' ) {
                count++;
            }if(c[2]=='S' or c[2]=='s') {
                count++;
            }else {
                count = 0;
            }
        if(count==3) yes
        else no
    }
}