class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i = nums2.size()-1;i>=0;i--){
            int current = nums2[i];
            while(!st.empty() && st.top()<=current){
                st.pop();
            }
            if(st.empty()){
                mpp[current]=-1;
            }
            else{
                mpp[current]=st.top();
            }
            st.push(current);
        }
        for(int i = 0;i<nums1.size();i++){
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};