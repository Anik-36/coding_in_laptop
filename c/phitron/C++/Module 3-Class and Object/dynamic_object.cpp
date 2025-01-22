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
int main(){
    char name[100] = "Rahim Ullah";
    Student * rahim = new Student(10,36,'A',name);

    cout<<rahim->cls<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->name<<endl;
}