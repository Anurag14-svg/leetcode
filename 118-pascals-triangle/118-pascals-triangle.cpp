class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> recent;
        for(int i = 1; i <= numRows; i++){
            vector<int> temp;
            if(i == 1){
                temp.push_back(1);
                // recent = temp;
            }
            
            else if(i == 2){
                temp.push_back(1);
                temp.push_back(1);
                // recent = temp;
            }
            
            else{
                    temp.push_back(1);
                    int m = 0;
                    
                    
                    while(m < recent.size() - 1){
                        temp.push_back(recent[m] + recent[m + 1]);
                        m++;
                    }
                    
                    
                    temp.push_back(1);
                
            
            }
            
            recent = temp;
            ans.push_back(temp);
        }
        
        return ans;
    }
};