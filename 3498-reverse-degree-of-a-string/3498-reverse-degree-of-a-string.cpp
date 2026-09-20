class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            int value = 26-(s[i]-97);
            int product = value*(i+1);
            sum+=product;
        }
        return sum;
        
    }
};