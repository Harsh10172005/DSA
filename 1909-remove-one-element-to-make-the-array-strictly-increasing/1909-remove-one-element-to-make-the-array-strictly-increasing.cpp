class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        vector<int> updated;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            updated = nums;
            updated.erase(updated.begin() + i);
            for(int j = 1;j<updated.size();j++){
                if(updated[j]<=updated[j-1]){
                    count++;
                }
            }
        }
        if(count<nums.size()){
            return true;
        }
        return false;
        
    }
};