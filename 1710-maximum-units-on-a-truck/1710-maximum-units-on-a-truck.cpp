class Comp{
    public:
    bool operator()(vector<int> &first , vector<int> &second){
        return first[1] > second[1];
    }
};

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end(), Comp());
        // for(int i = 0;  i < boxTypes.size() ; i++){
        //     cout<<boxTypes[i][0] <<" "<<boxTypes[i][1]<<endl;
        // }
        
        int ans = 0;
        // int i = 0;
        int cnt = 0;
        
        for(int i = 0 ; i < boxTypes.size(); i++){
            int temp = boxTypes[i][0];
            if(cnt == truckSize) break;
            
            while(temp){
                if(cnt == truckSize) return ans;
                ans += boxTypes[i][1];
                cnt ++;
                temp--;
            }
            
        }
        
        return ans;
    }
};