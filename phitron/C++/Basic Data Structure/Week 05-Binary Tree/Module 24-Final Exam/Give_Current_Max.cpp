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
        int mark;
        Student(string name,int roll,int mark){
            this->name = name;
            this->roll = roll;
            this->mark = mark;
        }
};
class cmp{
    public:
        bool operator()(Student a,Student b){
            if(a.mark<b.mark) return true;
            else if(a.mark>b.mark) return false;
            else{
                if(a.roll>b.roll) return true;
                else return false;
            }
        }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp> p;
    while(n--){
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        Student a(name,roll,mark);
        p.push(a);
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x == 0){
            string name;
            int roll,mark;
            cin>>name>>roll>>mark;
            Student a(name,roll,mark);
            p.push(a);
            cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().mark<<endl;
        }else if(x==1){
            if(!p.empty()){
                cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().mark<<endl;
            }else{
                cout<<"Empty"<<endl;
            }
        }else{
            if(!p.empty()){
                p.pop();
                if(!p.empty()){
                    cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().mark<<endl;
                }else{
                    cout<<"Empty"<<endl;
                }
            }else{
                cout<<"Empty"<<endl;
            }
        }
    }
}