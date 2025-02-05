#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int cls;
        int roll;
        char section;
};
int main(){
    Student rahim;
    rahim.cls = 10;
    rahim.roll = 26;
    rahim.section = 'C';
    char nm[100] = "Rahim Uddin";
    strcpy(rahim.name,nm);

    Student karim;
    karim.cls = 12;
    karim.roll = 1;
    karim.section = 'A';
    char nm2[100] = "Karim Cholimullah";
    strcpy(karim.name,nm2);

    cout<<rahim.section<<endl;

}