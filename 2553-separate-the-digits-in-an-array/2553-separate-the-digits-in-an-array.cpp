class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<int> vec;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]){
                int j = nums[i]%10;
                vec.push_back(j);
                nums[i]/=10;
            }
            ans.insert(ans.end(), vec.rbegin(), vec.rend());
            vec.clear();
        }
        return ans;
        
    }
};