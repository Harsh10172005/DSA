class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1]>=nums[i]) {
                count++;
                if (count > 1) return false; // agar ek se jayada baar aisa hau to direct false
                if (i>1 && nums[i-2]>=nums[i]) {
                    nums[i] = nums[i-1]; // decide karo current ko remove karna hai ya previous ko
                }
            }
        }
        return true;
    }
};