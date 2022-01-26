class Solution {
public:
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        for(auto pos : intervals){
            if(pos[1]<newInterval[0]){
                ans.push_back(pos);
            }
            else if(pos[0]>newInterval[1]){
                ans.push_back(newInterval);
                newInterval=pos;
            }
            else{
                newInterval[0]=min(pos[0], newInterval[0]);
                newInterval[1]=max(pos[1], newInterval[1]);
            }
        }
        
        ans.push_back(newInterval);
        return ans;
    }
};