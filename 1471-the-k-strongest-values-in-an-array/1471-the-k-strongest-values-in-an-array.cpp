class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int m = arr[(n- 1) / 2];
        
        vector<int> ans(k , 0);
        int i = 0 ;
        int start = 0 ;
        int end = n - 1;
        while(i < k){
            if(abs(arr[start] - m ) <= abs(arr[end] - m)){
                ans[i] = arr[end];
                i++;
                end--;
            }
            else if(abs(arr[start] - m ) > abs(arr[end] - m)){
                ans[i] = arr[start];
                i++;
                start++;
            }
            
            
            
        }
        
        return ans;
    }
};