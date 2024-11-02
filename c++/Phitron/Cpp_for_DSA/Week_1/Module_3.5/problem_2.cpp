#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

class Cricketer{
    public:
        int jersey_no;
        char country[100];
};

int main(){
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    char name[100] = "India";
    strcpy(dhoni->country,name);
    //cout<<dhoni->country<<endl;

    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);

    delete dhoni;
    cout<<kohli->jersey_no<<endl;
    cout<<kohli->country<<endl;
    
}