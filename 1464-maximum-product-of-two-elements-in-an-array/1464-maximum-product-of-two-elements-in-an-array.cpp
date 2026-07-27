class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        for(int num : nums){
            int old_a = a;
            a = max(a,num);
            b= max(b,min(old_a,num));
        }
        return (a-1)*(b-1);
    }
};