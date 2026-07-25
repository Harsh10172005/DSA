class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(),0);
        if(k==0){
            return ans;
        }
        else if(k>0){
            for(int i =0;i<code.size();i++){
                int step = 1;
                int add = 0;
                while(step<=k){
                    add+= code[(i + step ) % code.size()];
                    step++;
                }
                ans[i]=add;
            }
        }
        else{
            for(int i = 0;i<code.size();i++){
                int step = 1;
                int add = 0;
                while(step<=abs(k)){
                    add+=code[(i - step + code.size()) % code.size()];
                    step++;
                }
                ans[i]=add;
            }
        }
        return ans;
    }
};