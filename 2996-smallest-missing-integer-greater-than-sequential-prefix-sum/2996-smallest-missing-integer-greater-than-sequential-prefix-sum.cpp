class Solution {
public:
    int missingInteger(vector<int>& nums) {
    long long sum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1] + 1){
            sum += nums[i];
        }
        else{
            break;
        }
    }
    unordered_set<int> st(nums.begin(), nums.end());
    int x = sum;

    while(true) {
        if(st.find(x) == st.end()) {
            return x; // agar x nahi milta to usko return kar do
        }
        x++;
    }
        
    }
};