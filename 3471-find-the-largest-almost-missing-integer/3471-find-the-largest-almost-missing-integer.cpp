class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maxi = -1;
        unordered_map<int,int> mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        if(k==1){   
            for(auto it:mpp){
                if(it.second==1){
                    maxi = max(it.first,maxi);
                }
            }
        }
        else if(k==nums.size()){
            for(int i = 0;i<nums.size();i++){
                maxi = max(maxi,nums[i]);
            }
        }
        else{
            if(mpp[nums[0]]==1 && mpp[nums[nums.size()-1]]==1){
                return max(nums[0],nums[nums.size()-1]);
            }
            else if(mpp[nums[0]]==1){
                return nums[0];
            }
            else if(mpp[nums[nums.size()-1]]==1){
                return nums[nums.size()-1];
            }
            
        }
        return maxi;       
    }
};