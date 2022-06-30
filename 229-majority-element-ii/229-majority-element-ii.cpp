class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int cnt1 = 0, cnt2 = 0;
        int num1 =-1, num2= -1;
        
        for(auto it : nums){
            if(it == num1) cnt1++;
            else if(it == num2) cnt2++;
            else if(cnt1 == 0){
                num1 = it;
                cnt1++;
            }
            else if(cnt2 == 0){
                num2 = it;
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0;
        cnt2 = 0;
        
        int n = nums.size() / 3;
        
        for(auto it : nums){
            if(it == num1) cnt1++;
            else if(it == num2) cnt2++;
        }
        
        if(cnt1 > n) ans.push_back(num1);
        if(cnt2 > n) ans.push_back(num2);
        
        return ans;
    }
};