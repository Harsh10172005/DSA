class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int prefix = 0;
        int count = 0;
        unordered_map<int,int> mpp {{0,1}};
        for(int i = 0;i<nums.size();i++){
            prefix+=nums[i]%2;//odd 1 se store ho and even 0 se
            if(mpp.contains(prefix-k)){
                count+=mpp[prefix-k];
            }
            mpp[prefix]++;
        }
        return count;
        
    }
};