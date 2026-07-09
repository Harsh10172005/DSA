class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int k = 0;
        for(int i=0;i<nums.size();i++){
            k+=nums[i];
            ans.push_back(k);
        }
        return ans;
    }
};