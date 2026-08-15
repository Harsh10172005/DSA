class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXor = 0;
        int maxi = 0;
        for(int i = 0;i<nums.size();i++){
            totalXor^=nums[i];
            maxi = max(maxi,nums[i]);

        }
        if(totalXor!=0){
            return nums.size();
        }
        else if(totalXor==0){
            if(maxi>0){
                return nums.size()-1;
            }
        }
        return 0;

        
    }
};