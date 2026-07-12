class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }


    int upperbound(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]>target){
                ans=mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans-1;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int ans1 = lowerbound(nums,target);
        int ans2 = upperbound(nums,target);
        if(ans1==-1){
            ans2= -1;
        }
        else if(nums[ans1]!=target){
            ans1= -1;
            ans2 = -1;
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
    }
};