class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int prefix = 0;
        for(int i = 0;i<nums.size();i++){
            prefix = ((prefix*2)+nums[i])%5;
            ans.push_back(prefix == 0);
        }
        return ans;
        
    }
};