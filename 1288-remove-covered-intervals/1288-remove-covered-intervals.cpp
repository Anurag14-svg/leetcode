class Comp{
  public: 
    bool operator()(vector<int>&A , vector<int>&B){
        if(A[0] == B[0]) return A[1] > B[1];
        return A[0] < B[0];
    }
};

class Solution {
public:
    
    
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end() , Comp());
        int ans = 0;
        int n = intervals.size();
        
        vector<int> temp = intervals[0];
        
        for(int i = 1 ; i < intervals.size(); i++){
            if(intervals[i][0] >= temp[0] && intervals[i][1] <= temp[1]){
                ans++;
                
            }
                            temp[0] = intervals[i][0];
                            temp[1] = max(intervals[i][1] , temp[1]);

        }
        
        for(int i = 0 ; i < n ; i++){
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }
        
        return n - ans;
    }
};