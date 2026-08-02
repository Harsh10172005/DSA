class Solution {
public:
    bool canDivision(vector<int>& nums, int threshold , int divisor){
        long long thres = 0;
        for(int i = 0;i<nums.size();i++){
            thres += (nums[i]+divisor-1)/divisor; //kyonki hame next integer chahiye tha
        }
        return thres<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = 0;
        for(int i = 0;i<nums.size();i++){
            high = max(high,nums[i]);
        }
        while(low<=high){
            int divisor = low + (high-low)/2;
            if(canDivision(nums,threshold,divisor)){
                high = divisor -1;
            }
            else{
                low = divisor+1;
            }
        }
        return low;
        
    }
};