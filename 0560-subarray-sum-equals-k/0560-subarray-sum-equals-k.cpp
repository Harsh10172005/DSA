class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> freq {{0,1}};//kyonki pehle subarray count hi nhi hoga agar aisa nhi karenge to kyonki hum freq[sum]++ last me kar rhe hain
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int req_sum = sum-k;
            if(freq.contains(req_sum)){
                ans+=freq[req_sum];
            }
            freq[sum]++;
        }
        return ans;
    }
};