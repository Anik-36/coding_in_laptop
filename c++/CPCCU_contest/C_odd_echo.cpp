#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;  
    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < N; i++) {
        if(i%2==0){
            cout << words[i] <<endl;
        }
    }
}
