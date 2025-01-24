#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Person{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm,int a,int m1,int m2){
            name = nm;
            age = a;
            marks1 = m1;
            marks2 = m2;
        }
        void hello(){
            cout<<name<<" "<<age<<endl;
        }
        int total(){
            return marks1+marks2;
        }
};
int main(){
    Person anik("Md. Anisur Rahman Anik",23,100,95);
    cout<<anik.total();
}