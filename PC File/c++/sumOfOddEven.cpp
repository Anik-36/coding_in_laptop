#include<iostream>
using namespace std;
int main(){
   int a[10], i, eve=0, odd=0;
   cout<<"Enter any 10 numbers: ";
   for(i=0; i<10; i++)
      cin>>a[i];
   for(i=0; i<10; i++){
      if(a[i]%2==0)
         eve = eve+a[i];
      else
         odd = odd+a[i];
   }
   cout<<"\nSum of Even Numbers = "<<eve;
   cout<<"\nSum of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}
