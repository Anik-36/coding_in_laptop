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
    char name[100] = "Md. Anisur Rahman Anik Mondol";
    Person* anik = new Person(name,5.8,23);

    char name2[100] = "Md. Maidul Islam Mukul";
    Person* maidul = new Person(name2,5.4,23);

    int mx = INT_MIN;
    mx = (anik->age,maidul->age);
    
    if(mx == anik->age) cout<<anik->name<<endl;
    else cout<<maidul->name<<endl;

}