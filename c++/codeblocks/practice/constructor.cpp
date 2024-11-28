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
int main(){
    char na[100] = "Md. Anisur Rahman Anik";
    Student anik(na,12,36,'A');
    cout<<anik.name<<endl;
    cout<<anik.cls<<endl;
    cout<<anik.section<<endl;
    cout<<anik.roll<<endl;
    return 0 ;
}
