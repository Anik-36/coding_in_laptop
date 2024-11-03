#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Person{
    public:
        char name[100];
        float height;
        int age;

        Person(char* n, float h, int a){
            strcpy(name,n);
            height = h;
            age = a;
        }
};
int main(){
    char name[100] = "Md. Anisur Rahman Anik";
    Person* anik = new Person(name,5.8,23);
    cout<<anik->name<<endl;
    cout<<anik->height<<endl;
    cout<<anik->age<<endl;
    

}