#include<bits/stdc++.h>
#define   f(x)   cos(x)-3*x+1
#define   g(x)   (1+cos(x))/3
using namespace std;
int main(){
    int step=1, N;
    float x0, x1, e;
    cout<< setprecision(6)<< fixed;
    cout<<"Enter initial guess: ";
    cin>>x0;
    cout<<"Enter tolerable error: ";
    cin>>e;
    cout<<"Enter maximum iteration: ";
    cin>>N;
    do{
        x1 = g(x0);
        cout<<"Iteration-"<<step<<":\t x1 = "<<setw(10)<<x1<<" and f(x1) = "<<setw(10)<<f(x1)<<endl;
        step = step + 1;
        if(step>N){
            cout<<"Not Convergent.";
            exit(0);
        }
        x0 = x1;
    }
    while( fabs(f(x1)) > e);
    cout<< endl<<"Root is "<< x1;
    return(0);
}
