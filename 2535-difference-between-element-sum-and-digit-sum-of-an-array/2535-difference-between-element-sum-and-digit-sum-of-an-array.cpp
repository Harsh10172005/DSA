class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum = 0;
        for(int i = 0; i < nums.size(); i++){
            elementsum += nums[i];
        }
        int digitsum = 0;
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] > 0){
                int digit = nums[i] % 10;
                 digitsum += digit; 
                 nums[i] = nums[i] / 10;
            }
           
        }
        return elementsum - digitsum;
    }
};