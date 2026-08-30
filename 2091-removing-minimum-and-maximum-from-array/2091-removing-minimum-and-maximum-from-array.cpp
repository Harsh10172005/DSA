class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX,minidx;
        int maxi = INT_MIN,maxidx;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                maxidx=i;
            }
            if(nums[i]<mini){
                mini = nums[i];
                minidx=i;
            }
        }
        int sum1 = max(minidx,maxidx)+1;
        int sum2 = nums.size()-min(minidx,maxidx);
        int sum3 = min(minidx,maxidx)+nums.size()+1-max(minidx,maxidx);
        return min({sum1,sum2,sum3});
    }
};