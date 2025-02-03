#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int cls;
        int roll;
        char section;
        char name[100];

        Student(int c,int r,char s,char* n){
            roll = r;
            section = s;
            cls = c;
            strcpy(name,n);
        }
};

Student fun(){
    char name[100] = "Rahim Uddin";
    Student r(10,36,'A',name);
    return r;
}
int main(){
    Student rahim = fun();

    cout<<rahim.cls<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.name<<endl;
}