class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0 ; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int x : nums){
            if(x%2==0 && mpp[x]==1){
                return x;
            }
        }
        return -1;
    }
};