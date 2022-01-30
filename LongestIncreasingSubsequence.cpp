class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans=-1;
        vector<int> res(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    res[i]=max(res[i], 1+res[j]);
                }
            }
            ans=max(res[i], ans);
        }
        return ans;
    }
};