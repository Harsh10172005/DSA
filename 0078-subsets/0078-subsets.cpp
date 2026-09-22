class Solution {
public:
    void subset(int i,vector<int>& current,vector<vector<int>>& result,vector<int>& nums){
        if(i==nums.size()){
            result.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        subset(i+1,current,result,nums);

        current.pop_back();
        subset(i+1,current,result,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> result;
        subset(0,current,result,nums);
        return result;
    }
};