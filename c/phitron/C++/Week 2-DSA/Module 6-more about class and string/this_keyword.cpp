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
        Person(string name,int age){
            (*this).name = name; // this is pointer of the class. so if we put a value , we should dereference the pointer .
            (*this).age  = age;
        }
        void hello(){
            cout<<"hello"<<endl;
        }
};
int main(){
    Person anik("Anik",23);
    cout<<anik.name<<" "<<anik.age<<endl;
    anik.hello();
}