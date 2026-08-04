class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector <int> ans;
        unordered_set<int> st(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[nums.size()-1];
        for(int i = mini;i<=maxi;i++){
            if(st.find(i)==st.end()){// ye puch rha hai ki kya find ko element nhi mila??
                ans.push_back(i);
            }          
        }
        return ans;
    }
};