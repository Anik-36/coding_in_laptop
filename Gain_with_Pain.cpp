#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b=0 , l=0 , c=0 , s=0, a=0;
        int n;
        cin>>n;
        int m = n;
        int db = 15*n , dl = 15*n , dc = 15*n , ds = 14*n , da = 16*n;
        while(n--){
            int mb,qb,rb;
            cin>>mb>>qb>>rb;
            // b = mb + qb + rb;
            if(mb!=2 or qb!=3 or rb!=10){
                b = 0;
            }else b++;
            int  ml,ql,rl;
            cin>>ml>>ql>>rl;
            //l = ml + ql + rl;
            if(ml!=2 or ql!=3 or rl!=10){
                l = 0;
            }else l++;
            int mc,qc,rc;
            cin>>mc>>qc>>rc;
            //c = mc + qc + rc ;
            if(mc!=2 or qc!=3 or rc!=10){
                c = 0;
            }else c++;
            int ms,qs,rs;
            cin>>ms>>qs>>rs;
            //s = ms + qs + rs;
            if(ms!=1 or qs!=3 or rs!=10){
                s = 0;
            }else s++ ;
            int ma,qa,ra;
            cin>>ma>>qa>>ra;
            //a = ma + qa + ra;
            if(ma!=3 or qa!=3 or ra!=10){
                a = 0;
            }else a++;
        }
        if((b <m) or (l <m) or (c <m) or (s<m) or (a <m) ){
            cout<<"Inconsistent"<<endl;
        }else{
            cout<<"Consistent"<<endl;
        }
    }
}