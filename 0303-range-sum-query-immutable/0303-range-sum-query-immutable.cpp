class NumArray {
    vector<int> sum;
public:
    NumArray(vector<int>& nums) {
        int sums = 0;
        for(int i = 0;i<nums.size();i++){
            sums+=nums[i];
            sum.push_back(sums);
        }
        
    }
    
    int sumRange(int left, int right) {
        int ans = 0;
        if(left == 0){
            ans = sum[right];
        }
        else{
            ans = sum[right]-sum[left-1];
        }
        return ans;  
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */