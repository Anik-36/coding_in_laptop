#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

int main(){
    Student rahim;
    rahim.roll = 9;
    rahim.cls = 10;
    rahim.section = 'A';
    char nm[100] = "Rahim Khondokar";
    strcpy(rahim.name,nm);

    Student anik;
    anik.roll = 36;
    anik.cls = 5;
    anik.section = 'B';
    char nm2[100] = "Md. Anisur Rahman Anik";
    strcpy(anik.name,nm2);

    cout<<anik.name<<endl;
    cout<<anik.cls<<endl;
    cout<<anik.section<<endl;
    cout<<anik.roll<<endl;

    cout<<rahim.name<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.roll<<endl;
    
}