#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int math_mark;
        int eng_mark;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i].name;
        cin>>a[i].cls>>a[i].section>>a[i].math_mark>>a[i].eng_mark;
    }
    for(int i = n-1; i>=0; i--){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
    }
}