class Solution {
public:
    int longestValidParentheses(string s) {
        int st = 0;
        int open = 0;
        int longest = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==')'){
                open--;
            }
            else{
                open++;
            }
            while(open<0){
                if(s[st]=='('){
                    open--;
                }
                else{
                    open++;
                }
                st++;
            }
            if(open==0){
                longest = max(longest,i-st+1);
            }
        }
        st = s.size()-1;
        open =0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                open++;
            }
            else{
                open--;
            }
            while(open<0){
                if(s[st]=='('){
                    open++;
                }
                else{
                    open--;
                }
                st--;
            }
            if(open==0){
                longest = max(longest,st-i+1);
            }
        }
        return longest;
        
    }
};