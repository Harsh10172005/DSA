class Solution {
public:
    int countDigits(int num) {
        int divide = num;
        int count = 0;
        while(num>=1){
            int digit = num%10;
            if(divide%digit==0){
                count++;
            }
            num/=10;
        }
        return count;
    }
};