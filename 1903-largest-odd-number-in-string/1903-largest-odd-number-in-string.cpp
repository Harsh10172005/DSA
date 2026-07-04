class Solution {
public:
    string largestOddNumber(string num){
        int i = num.length()-1;
        while(i>=0){
            if(num[i]%2!=0){
                return num;
            }
            else{
                num.pop_back();
            }
            i--;
        }
        return "";
        
    }
};