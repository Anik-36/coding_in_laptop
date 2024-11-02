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

        Student(int r,int c, char s, char* n){
            roll = r;
            cls = c;
            section = s;
            strcpy(name,n);
        }
};
Student fun(){
    char name[100] = "Rahim Ullah";
    Student r(36,12,'A',name);
    return r;

}
int main(){
    Student rahim = fun();
    cout<<rahim.name<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.roll<<endl;
}