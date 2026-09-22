class Solution {
public:
    void subset(int i,vector<int>& current,set<vector<int>>& st,vector<int>& nums){
            if(i==nums.size()){
                st.insert(current);
                return;
            }

            current.push_back(nums[i]);
            subset(i+1,current,st,nums);

            current.pop_back();
            subset(i+1,current,st,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> current;
        set<vector<int>> st;
        subset(0,current,st,nums);
        vector<vector<int>> result;
        for (auto v : st) {
            result.push_back(v);
        }
        return result;
        
    }
};