#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int cls;
        int roll;
        char section;

        Student(char* n, int c, int r, char s){
            strcpy(name,n);
            cls = c;
            roll = r;
            section = s;
        }

};
Student fun(){
    char na[100] = "Md. Anisur Rahman Anik";
    Student r(na,12,36,'A');
    return r;
}

int main(){
    Student anik = fun();
    cout<<anik.name<<endl;
    cout<<anik.cls<<endl;
    cout<<anik.roll<<endl;
    cout<<anik.section<<endl;
    return 0;
}
