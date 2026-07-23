class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int leftpdt=1;
        int rightpdt = 1;
        int ans =INT_MIN;
        int left = 0;
        int right = nums.size()-1;
        while(left<nums.size()){
            
            leftpdt*=nums[left];
            rightpdt*=nums[right];
            ans = max(ans,max(leftpdt,rightpdt));
            
            if(leftpdt == 0){
                leftpdt = 1;
            }
            if(rightpdt == 0){
                rightpdt = 1;
            }
            right--;
            left++;

        }
        return ans;

        
    }
};