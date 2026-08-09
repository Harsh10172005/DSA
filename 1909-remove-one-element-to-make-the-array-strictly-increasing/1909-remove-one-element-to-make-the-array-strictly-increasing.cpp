class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {

            vector<int> updated = nums;
            updated.erase(updated.begin() + i);

            bool check = true;

            for(int j = 1; j < updated.size(); j++) {
                if(updated[j] <= updated[j-1]) {
                    check = false;
                    break;
                }
            }

            if(check) {
                return true;
            }
        }

        return false;
    }
};