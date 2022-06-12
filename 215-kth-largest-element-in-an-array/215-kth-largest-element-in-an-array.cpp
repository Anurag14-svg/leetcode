// Sorting
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin() , nums.end());
//         int n = nums.size();
//         return nums[n-k];
//     }
// };


// Mapping
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int , vector<int> , greater<int>> pq;
//         for(int i = 0 ; i < nums.size(); i++){
//             pq.push(nums[i]);
//             if(pq.size() > k) pq.pop();
//         }
        
        
//         return pq.top();
//     }
// };


// Quick Select
class Solution {
private:
    int quickSelect(vector<int> nums , int l , int r, int k){
        int pivot = nums[r];
        int p = l;
        int ind = nums.size() - k;
        
        for(int i = l ; i < r ; i++){
            if(nums[i] < pivot){
                int temp = nums[i];
                nums[i] = nums[p];
                nums[p] = temp;
                p++;
            }
        }
        
        int val = nums[p];
        nums[p] = nums[r];
        nums[r] = val;
        
        if(p < ind) return quickSelect(nums , p+1 , r , k);
        else if( p > ind) return quickSelect(nums , l , p-1 ,k);
        else return nums[p];
    };
public:
    int findKthLargest(vector<int>& nums, int k) {
        // k = nums.size() - k;
        return quickSelect(nums , 0 , nums.size()-1 , k);
    }
};

