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

        Student(int r, int c, char s, char* n){
            roll = r;
            cls = c;
            section = s;
            strcpy(name,n);
        }
};
int main(){
    char name[100] = "Md. Anisur Rahman Anik";
    Student* rahim = new Student(36,7,'A',name);

    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;

    // shortcut upay
    //(*rahim).name = rahim->name

    // deleting object
    delete rahim;
    
    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    
}