class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i = 0;i<nums.size();i++){
            if(mpp.contains(i+1)){
                continue;
            }
            else{
                ans.push_back(i+1);
            }
        }

        return ans;
        
    }
};