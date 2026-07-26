class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = nums.size();
        bool flag = false;
        for(int i = 1;i<n;i++){
            if(nums[i]<nums[i-1]){ //4 ko identify kiya wahan se galt hua hai
                flag = true;
            }
            if(flag){
                mini = min(mini,nums[i]); //yahan store karwa diya
            }
        }
        flag = false;
        for(int i = n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){ //10 ko identify kiya jahan se galt hua hai
                flag = true;
            }
            if(flag){
                maxi = max(maxi,nums[i]); //yahan store karwa diya
            }
        }
        int r;
        int l;
        for(l = 0;l<n;l++){
            if(nums[l]>mini){ //jahan se value 4 se badi ho wajah se galti suru hai
                break;
            }
        }
        for(r = n -1;r>=0;r--){
            if(nums[r]<maxi){ // jahan value 10 se choti ho wajah galti khatam hai
                break;
            }
        }
        if(r-l+1 >0){
            return r-l+1;
        }
        return 0;
        
    }
};