// #include<bits/stdc++.h>
// #define endl '\n'
// #define ll long long 
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// using namespace std;
// int main(){
//     string a;
//     int co = 0, cz = 0;
//     cin>>a;
//     for(int i = 0 ; i<a.size()-1; i++){
//         if(a[i] == '0' && a[i+1] == a[i]){
//             cz++;
//             i++;
//         }
//         else if(a[i] == '1' && a[i+1] == a[i]){
//             co++;
//             i++;
//         }else{
//             cz = 0;
//             co = 0;
//         }
//     }
//     if(cz == 7 || co == 7) yes
//     else no

// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){

//  string target = "Timur";
//     sort(target.begin(), target.end());

//     long t; cin >> t;
//     while(t--){
//         long n; cin >> n;
//         string s; cin >> s;
//         sort(s.begin(), s.end());
//         cout << ((s == target) ? "YES" : "NO") << endl;
//     }

// }







#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int maxel = 0;
    int x;
    for(int i = 1; i <= n; i++){
      cin>>x;
      if(x - i > maxel){
        maxel = x - i;
      }
    }
    cout<<maxel<<endl;
  }

}