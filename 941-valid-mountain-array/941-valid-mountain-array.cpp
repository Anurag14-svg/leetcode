class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 1;
        while(i< n && arr[i] > arr[i-1]){
            i++;
        }
        
        if(i == 1 || i == n){
            return false;
        }
        
        while(i  < n && arr[i] < arr[i-1]){
            i++;
        }
        
        return i == n;
    }
};