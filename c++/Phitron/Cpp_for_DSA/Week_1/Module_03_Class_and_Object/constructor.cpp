#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Student{
    public:
        int cls;
        int roll;
        char section;
        char name[100];

        Student(int r, int c, char s, char* nm ){
            roll = r;
            cls = c;
            section = s;
            strcpy(name,nm);
        }

};
int main(){
    Student rahim(29,7,'A', "Md. Rahim uddin");

    Student karim(10,7,'D', "Md. Karim Benjema");
    //rahim.cls = 12;

    cout<<rahim.name<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.roll<<endl;
    
    cout<<karim.name<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    cout<<karim.roll<<endl;
}