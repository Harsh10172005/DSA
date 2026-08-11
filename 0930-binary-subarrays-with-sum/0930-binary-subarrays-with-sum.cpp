class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> freq {{0,1}};
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int req_sum = sum-goal;
            if(freq.contains(req_sum)){
                ans+=freq[req_sum];
            }
            freq[sum]++;
        }
        return ans;
        
    }
};