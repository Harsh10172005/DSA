class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left<nums.size()){
            if(nums[left]%2==1){
                swap(nums[left],nums[right]);
                right-=2;
            }
            else{
                left+=2;
            }
        }
        return nums;
        
    }
};