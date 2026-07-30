class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            int idx = abs(nums[i])-1;// kyonki value hamesha n jitni hogi array me and abs iss liye kyonki ho skta hai hamne pehle usse negative kiya ho;
            if(nums[idx]<0){ //agar already negative hai to matlab wo duplicate hai or usse add kar do
                ans.push_back(abs(nums[i]));
            }
            else{
                nums[idx] *= -1;//agar negative nhi hai to negative mark kar do
            }
        }
        return ans;
    }
};