class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int prefix = 0;
    int minPrefix = 0;
    int ans = INT_MIN;
    for(int x : nums) {
        prefix += x;
        ans = max(ans, prefix - minPrefix);
        minPrefix = min(minPrefix, prefix);
    }
    return ans;
}
};