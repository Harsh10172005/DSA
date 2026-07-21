class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];  //complement check karo agar hai to uska index and iska index return kar do 

            if(mp.find(complement) != mp.end()) { //ye check kar rha hai complement ko
                return {mp[complement], i};
            }

            mp[nums[i]] = i;  //agar complement nhi hai to add kar do
        }

        return {};
    }
};