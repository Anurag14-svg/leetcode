class Solution {
public:
    
    int merge(vector<int> &nums , int low ,int mid , int high){
        int total = 0;
        int j = mid;
        
        for(int i = low ; i <= mid - 1; i++ ){
            while( j <= high && nums[i] > 2 * (long long) nums[j]){
                j++;
            }
            
            total += (j - mid);
        }
        
        vector<int> t;
        int left = low , right = mid;
        while (left <= mid - 1 && right <= high) {

    if (nums[left] <= nums[right]) {
      t.push_back(nums[left++]);
    } else {
      t.push_back(nums[right++]);
    }
  }

  while (left <= mid- 1) {
    t.push_back(nums[left++]);
  }
  while (right <= high) {
    t.push_back(nums[right++]);
  }

  for (int i = low; i <= high; i++) {
    nums[i] = t[i - low];
  }
  return total;
        
        
    }
    
    int mergeSort(vector<int> &nums , int low , int high){
        if(low >= high) return 0;
        int mid = (low + high) / 2;
        int inv = mergeSort(nums , low , mid);
        inv += mergeSort(nums , mid+1 , high);
        inv += merge(nums , low , mid+ 1, high);
        
        return inv;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums , 0  , nums.size() - 1);
    }
};