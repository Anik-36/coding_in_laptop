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
        int id;
        int math_mark;
        int eng_mark;
};
bool cmp(Student a, Student b){
    int totala = a.math_mark+a.eng_mark;
    int totalb = b.math_mark+b.eng_mark;
    if(totala>totalb) return true;
    else if(totala==totalb){
        if(a.id<b.id) return true;
        else return false;
    }
    else return false;

}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math_mark>>a[i].eng_mark;
    }
    sort(a,a+n,cmp);
    for(int i = 0 ; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
    }
}