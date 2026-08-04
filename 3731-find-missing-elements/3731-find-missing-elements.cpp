class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector <int> ans;
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi = 0;
        int mini = 102;
        for(int i = 0;i<nums.size();i++){
            maxi =max(maxi,nums[i]);
            mini = min(mini,nums[i]); 
        }
        for(int i = mini;i<=maxi;i++){
            if(st.find(i)==st.end()){// ye puch rha hai ki kya find ko element nhi mila??
                ans.push_back(i);
            }          
        }
        return ans;
    }
};