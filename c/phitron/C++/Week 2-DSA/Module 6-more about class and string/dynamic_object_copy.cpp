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
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};
int main(){
    Person* rakib = new Person("Rakib",26);
    Person* anik = new Person("Anik",23);

    // rakib = anik; // it direct the object of anik but if the object of anik delete then it can't find any value; and gives segmentation fault.
    // rakib->name = anik->name;
    // rakib->age = anik->age;

    *rakib = *anik; // optimal method

    delete anik;

    cout<<rakib->name<<" "<<rakib->age<<endl;
}