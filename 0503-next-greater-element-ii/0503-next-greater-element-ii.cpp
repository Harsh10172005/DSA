class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        for(int i = 2*nums.size()-1;i>=0;i--){
            int index = i%nums.size();
            int current = nums[index];
            while(!st.empty()&&st.top()<=current){
                st.pop();
            }
            if(st.empty()){
                ans[index]=-1;
            }
            else{
                ans[index] = st.top();
            }
            st.push(current);
        }
        return ans;
    }
};