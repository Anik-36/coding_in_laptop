#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void insert_in_max(vector<int> &v,int x){
    v.push_back(x);
    int cur_idx = v.size()-1;
    int par_idx = (cur_idx -1)/2;
    while(cur_idx != 0){
        int par_idx = (cur_idx -1)/2;
        if(v[cur_idx] > v[par_idx]){
            swap(v[cur_idx],v[par_idx]);
            cur_idx = par_idx;
        }else{
            break;
        }
    }
}
void delete_from_max_heap(vector<int> &v){
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur_idx = 0;
    int last_idx = v.size()-1;
    while(true){
        int left_idx = cur_idx*2 +1;
        int right_idx = cur_idx*2+2;
        if(left_idx<=last_idx && right_idx <=last_idx ){
            if(v[left_idx]>=v[right_idx] && v[left_idx]>v[cur_idx]){
                swap(v[cur_idx],v[left_idx]);
                cur_idx = left_idx;
            }else if(v[right_idx]>=v[left_idx] && v[right_idx]>v[cur_idx]){
                swap(v[cur_idx],v[right_idx]);
                cur_idx = right_idx;
            }else{
                break;
            }
        }else if(left_idx <= last_idx){
            if(v[left_idx]>v[cur_idx]){
                swap(v[left_idx],v[cur_idx]);
                cur_idx = left_idx;
            }else{
                break;
            }
        }else{
            break;
        }
    }
}
void print_heap(vector<int> v){
    for(int val : v) cout<<val<<" ";
    cout<<endl;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        insert_in_max(v,x);
    }
    delete_from_max_heap(v);
    print_heap(v);

    delete_from_max_heap(v);
    print_heap(v);
}