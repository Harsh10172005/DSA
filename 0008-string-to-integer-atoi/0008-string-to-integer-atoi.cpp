class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        long long num = 0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i<s.size() && s[i]=='-'){
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            num = num*10 + (s[i]-'0');
            i++;
            if(sign == 1 && num > INT_MAX){
                return INT_MAX;
            }
            if(sign == -1 && -num < INT_MIN){
                return INT_MIN;
            }
        }
        return num*sign;
        
    }
};