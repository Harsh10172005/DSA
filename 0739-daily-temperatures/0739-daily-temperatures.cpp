class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int k = n-1;k>=0;k--){
            int current = temperatures[k];
            while(!st.empty()&&temperatures[st.top()]<=current){
                st.pop();
            }
            if(st.empty()){
                ans[k]=0;
            }
            else{
                ans[k] = st.top()-k;
            }
            st.push(k);
        }
        return ans;
    }
};