class Solution {
public:
    int balancedStringSplit(string s) {
        int i = 0;
        int R = 0;
        int L = 0;
        int ans = 0;
        while(i<s.size()){
            if(s[i]=='R'){
                R++;
            }
            else {
                L++;
            }
            i++;
            if(R == L){
                ans++;
                R=0;
                L=0;
            }
        }
        return ans;
    }
};