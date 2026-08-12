class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> freq {{0,1}};
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int req_sum = ((sum % k) + k) % k; //for handle negative modulas
            if(freq.contains(req_sum)){
                ans+=freq[req_sum];
            }
            freq[req_sum]++;
        }
        return ans;
        
    }
};