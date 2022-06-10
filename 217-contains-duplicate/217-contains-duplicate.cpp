class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0 ; i < nums.size() ;i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin() , nums.end());
//         bool ans = false;
        
//         for(int i = 0 ; i < nums.size() - 1; i++){
//             if(nums[i] == nums[i+1]){
//                 ans = true;
//                 break;
//             }
//         }
        
//         return ans;
//     }
// };