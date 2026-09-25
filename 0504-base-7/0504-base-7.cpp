class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string rem="";
        int num1 = num;
        if(num<0){
            num*=-1;
        }
        while(num){
            int reminder = num%7;
            rem+=to_string(reminder);
            num/=7;
        }
        reverse(rem.begin(),rem.end());
        if(num1<0){
            string sign="-";
            string remf = sign+rem;
            return remf;
        }
        return rem;
    }
};