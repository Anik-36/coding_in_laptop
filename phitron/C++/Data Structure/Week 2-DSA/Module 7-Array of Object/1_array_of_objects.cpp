#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;

        // Student(string name,int roll,int marks){
        //     this->name  = name;
        //     this->roll  = roll;
        //     this->marks = marks;
        // }
        // it is not possible to give input for object of array by constructor. so we don't use constructor.

};
int main(){
    Student a[3];
    for(int i = 0; i<3; i++){
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore(); // when we take an integer and next a string getline takes the newline as a input. thats why cin.ignore is used
    }
    for(int i = 0; i<3; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
}