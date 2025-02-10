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
    Student rahim(10,36,'A',"Rahim Uddin");
    Student karim(12,28,'C',"Karim Cholimullah");

    cout<<rahim.cls<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.name<<endl;

    cout<<karim.cls<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.name<<endl;
}