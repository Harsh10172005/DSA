class Solution {
public:
    int minAddToMakeValid(string s) {
        int o = 0;
        int c = 0;
        for(char ch : s){
            if(ch == '('){
                o++;
            }
            if(ch == ')'){
                if(o>0){
                    o--;
                }
                else{
                    c++;
                }
            }
        }
        return (o+c);
        
    }
};