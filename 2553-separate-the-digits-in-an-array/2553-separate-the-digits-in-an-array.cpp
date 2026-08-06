class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string str = "";
        for (int i = 0; i < nums.size(); i++) {
            str += to_string(nums[i]);
        }
        for (int i = 0; i < str.size(); i++) {
            ans.push_back(str[i] - '0');
        }
        return ans;
        
    }
};