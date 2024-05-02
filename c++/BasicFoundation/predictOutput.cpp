#include<iostream>
using namespace std;
int main(){
    int x=4 , y=0 ;
    while(x>=4){
        x--;
        y++;
        if(x==y){
            continue;
        }else{
            cout<<x<<" "<<y<<endl;
        }
    }
}