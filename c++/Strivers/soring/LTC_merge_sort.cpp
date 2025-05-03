class Solution {
    public:
        void merge(vector<int> &a,int low, int mid, int high){
            vector<int> tmp;
            int left = low;
            int right = mid+1;
            while(left<=mid && right<=high){
                if(a[left]<=a[right]){
                    tmp.push_back(a[left]);
                    left++;
                }else{
                    tmp.push_back(a[right]);
                    right++;
                }
            }
            while(left<=mid){
                tmp.push_back(a[left]);
                left++;
            }
            while(right<=high){
                tmp.push_back(a[right]);
                right++;
            }
            for(int i = low; i<=high; i++){
                a[i] = tmp[i-low];
            }
        }
        void mS(vector<int> &a,int low, int high){
            if(low >= high) return;
            int mid = (low+high)/2;
            mS(a,low,mid);
            mS(a,mid+1,high);
            merge(a,low,mid,high);
        }
        vector<int> sortArray(vector<int>& a) {
            int n = a.size();
            mS(a,0,n-1);
            return a;
        }
    };