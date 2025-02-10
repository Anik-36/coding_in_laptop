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
};
bool cmp(Student a, Student b){ // make function for mark sorting
    if(a.marks<b.marks) return true;
    else return false;
}
int main(){
    Student a[3];
    for(int i = 0; i<3; i++){
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    // using sort function
    sort(a,a+3,cmp); // for object, must use a compare function for based on which value should be sorted.

    for(int i = 0; i<3; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
}