#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        char section;
        char cls;
        int math_marks;

        Student(char* n, int r, char s, char c, int m){
            strcpy(name,n);
            roll = r;
            section = s;
            cls = c;
            math_marks = m;
        }

};
int main(){
    char name[100] = "Rahim Uddin";
    Student rahim(name,1,'A',10,90);

    char name2[100] = "Karim Haque";
    Student karim(name2,2,'B',10,93);

    char name3[100] = "Md. Anisur Rahman Anik";
    Student anik(name3,36,'A',10,100);
    
    int mx = INT_MIN;
    mx = max(mx,rahim.math_marks);
    mx = max(mx,karim.math_marks);
    mx = max(mx,anik.math_marks);
    if(mx==100) cout<<anik.name<<endl;
    else if(mx==93) cout<<karim.name<<endl;
    else cout<<rahim.name<<endl;
    
    //cout<<mx<<endl;
}