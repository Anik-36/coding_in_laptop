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
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    for(int i = 0, j = n-1; i<j ; i++,j--){
        int tmp = a[i].id;
        a[i].id = a[j].id;
        a[j].id = tmp;
    }
    for(int i = 0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
}