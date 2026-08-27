class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int prefixsum = 0;
    int minPrefixsum = 0;
    int ans = INT_MIN;
    for(int x : nums) {
        prefixsum += x;
        ans = max(ans, prefixsum - minPrefixsum);
        minPrefixsum = min(minPrefixsum, prefixsum);
    }
    return ans;
}
};