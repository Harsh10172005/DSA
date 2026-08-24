class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0;
        int d = 0;
        int r = 0;
        int l = 0;
        for(char ch : moves){
            if(ch == 'U'){
                u++;
            }
            else if(ch == 'D'){
                d++;
            }
            else if(ch == 'R'){
                r++;
            }
            else if(ch == 'L'){
                l++;
            }
        }
        if(u==d && l==r){
            return true;
        }
        return false;
        
    }
};