class Solution {
public:
    bool checkDivisibility(int n) {
        int digit_s = 0;
        int digit_p = 1;
        int N = n;
        while(n){
            int a = n%10;
            digit_s+=a;
            digit_p*=a;
            n/=10;
        }
        if(N%(digit_s+digit_p)==0){
            return true;
        }
        return false;
        
    }
};