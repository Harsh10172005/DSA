class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int element = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]==element){
                count++;
            }
            else{
                if(count!=0){
                    count--;
                }
                else{
                    element = nums[i];
                    count++;
                }
            }
        }
        return element;
    }
};