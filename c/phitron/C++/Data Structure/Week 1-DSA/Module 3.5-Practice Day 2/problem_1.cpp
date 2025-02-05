// Question: Create three static objects with the help of the constructor of the following class.
/* Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name. */

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll ;
        char section;
        int math_marks;
        int cls;

        Student(char * nm,int r,char s, int m,int c){
            roll = r;
            section = s;
            math_marks = m;
            cls = c;
            strcpy(name,nm);
        }
};
int main(){
    char name1[100] = "Rahim Ullah";
    Student rahim = Student(name1,10,'A',80,10);
    char name2[100] = "Mahmuda Akter Mim";
    Student mim = Student(name2,9,'B',2,17);
    char name3[100] = "Md. Anisur Rahman Anik";
    Student anik = Student(name3,1,'C',100,10);

    if(anik.math_marks>mim.math_marks && anik.math_marks>rahim.math_marks) cout<<anik.name<<endl;
    else if(mim.math_marks>anik.math_marks && mim.math_marks>rahim.math_marks) cout<<mim.name<<endl;
    else cout<<rahim.name<<endl;
}