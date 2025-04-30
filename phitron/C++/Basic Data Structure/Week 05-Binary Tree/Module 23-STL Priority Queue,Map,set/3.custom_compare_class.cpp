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
        int number;
        Student(string name,int roll, int number){
            this->name = name;
            this->roll = roll;
            this->number = number;
        }
};
class cmp{
    public:
        bool operator()(Student a, Student b){
            if(a.number > b.number) return true; // true means it need to be changed. we need the left vlaue should be smaller than right.
            else if(a.number < b.number) return false; // flase means it doen't need any change. the number is in correct position.
            else{
                if(a.roll > b.roll) return true;
                else return false;
            }
        }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp> pq; // if compare get true it demand to be changed.
    for(int i = 0 ; i<n; i++){
        string name;
        int roll;
        int number;
        cin>>name>>roll>>number;
        Student obj(name,roll,number);
        pq.push(obj);
    }
    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().number<<endl;
        pq.pop();
    }
}