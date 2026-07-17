class Solution {
public:
    int integerBreak(int n) {
        int pdt = 1;
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        else{
            while(n>4){
                pdt*=3;
                n-=3;
            }
            pdt*=n;
        }
        return pdt;
    }
};