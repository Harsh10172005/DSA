class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int x :nums){
            mpp[x]++;
        }
        int i = 1;
        while(true){
            if (mpp.count(k*i) > 0){
                i++;
            }
            else{
                return k*i;
            }
        }
        return -1;
    }
};