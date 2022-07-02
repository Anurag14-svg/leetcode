class Solution {
public:
    long long maxDiff(vector<int> arr, int end){
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int maxD = arr[0];
        
        for(int i = 1 ; i < n; i++){
            maxD = max(maxD , arr[i] - arr[i -1]);
        }
        
        maxD = max(maxD, end - arr[n-1]);
        
        return maxD;
    }
    
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long x = maxDiff(horizontalCuts , h);
        long long y = maxDiff(verticalCuts , w);
        
        return (x * y) % 1000000007;
    }
};