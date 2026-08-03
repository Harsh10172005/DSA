class Solution {
public:
    bool canSplit(vector<int>& nums, int k , int largestSum){
        int count = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(sum+nums[i]>largestSum){
                count++;
                sum = nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        for(int i = 0;i<nums.size();i++){
            low = max(low,nums[i]);
            high += nums[i];
        }
        while(low<=high){
            int largestSum = low + (high-low)/2;
            if(canSplit(nums,k,largestSum)){
                high = largestSum-1;
            }
            else{
                low = largestSum+1;
            }
        }
        return low;
    }
};