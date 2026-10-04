class Solution {
public:
    bool checkValidString(string s) {
        // Treat every '*' as '('. This is the maximum open balance.
        // If it still goes negative, some ')' can never be matched.
        int open = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '*'){
                open++;
            }
            else{
                open--;
            }
            if (open < 0) return false;
        }
        // Treat every '*' as ')'. This is the maximum close balance.
        // If it still goes negative, some '(' can never be matched.
        int close = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == ')' || s[i] == '*'){
                ++close;
            }
            else{
                close--;
            }
            if (close < 0) return false;
        }
        // Both bounds held, including "(*)", where the star is empty
        // and the two passes only borrowed it as opposite brackets.
        return true;
    }
};