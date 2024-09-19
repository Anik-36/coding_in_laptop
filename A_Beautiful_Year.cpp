#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main(){
    int n;
    int a[4];
    cin>>n; 
    int b = n+1; 
    n+=1;
    while(n!=0){  
        for(int i = 0; i<4; i++){ 
            a[i] = n%10;
            n = n/10; 
            if(i>0){ 
                for(int j = i-1; j>=0 ; j--){ 
                    if(a[i] == a[j]){ 
                        b = b + 1;
                        n = b;
                        j = -1;
                        i = 0;
                    }
                }
            }
        }
    }
    cout<<b<<endl;
}
 //2029 2030 2031

// 2013 -> 3 -> 1,0,2   1-> 3,0,2   0-> 2,1,3   2-> 0,1,3

// // time complexity : O(n) * 4 * 4 = O(n) = 10^4



// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     n++;
//     int a[4];
//     while(n){
//         int tmp = n;
//         for(int i=0;i<4;i++){
//             a[i] = tmp % 10;
//             tmp /= 10;
//         }
//         int fre[10] = {0};
//         bool ok = true;
//         for(int i=0;i<4;i++){
//             fre[a[i]]++;
//             if(fre[a[i]] > 1){
//                 n++;
//                 ok = false;
//                 break;
//             }
//         }
//         if(ok){
//             cout << n << endl;
//             return 0;
//         }
//     }
// }



// int a = n%10;
        // n/=10;
        // int c = n%10;
        // n/=10;
        // int d = n%10;
        // n/=10;
        // int e = n%10;
        // n/=10;
        // if(a==c or a==d or a==e or c==d or c == e or d ==e){
        //     n = b+1;
        //     b = b+1;
        // }else{
        //     cout<<b<<endl;
        //     break;
        // }