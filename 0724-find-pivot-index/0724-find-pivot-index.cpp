class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        int right_sum = 0;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            left_sum = sum-nums[i];
            right_sum = total_sum-sum;
            if(left_sum==right_sum){
                return i;
            }
        }
        return -1;
        
    }
};