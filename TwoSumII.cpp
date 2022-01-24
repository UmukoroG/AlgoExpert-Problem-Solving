class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j=nums.size()-1;
        int i=0;
        while(i<j){
            if(nums[i] + nums[j] == target){
                return {i+1,j+1};
            }
            else if(nums[i] + nums[j] < target){
                i++;
            }
            else{
                j--;
            }
        }
        return {0,0};
    }
};