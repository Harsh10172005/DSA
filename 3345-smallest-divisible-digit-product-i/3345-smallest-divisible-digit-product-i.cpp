class Solution {
public:
    int smallestNumber(int n, int t) {
        int num = 1;
        while(true){
            int ns = n;
            while(ns!=0){
                num*=ns%10;
                ns/=10;
            }
            if(num%t==0){
                break;
            }
            else{
                n++;
                num = 1;
            }
        }
        return n;
        
    }
};