#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char sec;

};
int main(){
    Student anik;
    char na[100] ="Md. Anisur Rahman Anik";
    strcpy(anik.name,na);
    anik.roll = 36;
    anik.cls = 12;
    anik.sec = 'A';

    cout<<anik.name<<endl;
    cout<<anik.roll<<endl;
    cout<<anik.cls<<endl;
    cout<<anik.sec<<endl;
    return 0;
}
