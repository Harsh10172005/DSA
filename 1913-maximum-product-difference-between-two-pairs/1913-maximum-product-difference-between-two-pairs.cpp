class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        int max = 1;
        int min = 1;
        for(int a = 0; a<2;a++){
            max*=(nums[j]);
            min*=(nums[i]);
            i++;
            j--;  
        }
        int pdt = max-min;
        return pdt;
    }
};