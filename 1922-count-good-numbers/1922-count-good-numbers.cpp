class Solution {
public:

    // bool Check(long long num){
    //     bool check =  true;
    //     string str = to_string(num);
    //     for(int i = 0;i<str.size();i++){
    //         if(i%2==0){
    //             if((str[i]-'0')%2==0){
    //                 check = true;
    //             }
    //             else{
    //                 return false;
    //             }
    //         }
    //         else{
    //             if((str[i]-'0')==2 || (str[i]-'0')==3 || (str[i]-'0')==5 || (str[i]-'0')==7 ){
    //                 check = true;
    //             }
    //             else{
    //                 return false;
    //             }
    //         }
    //     }
    //     return check;
    // }

    long long MOD = 1e9 + 7;
    long long power(long long a, long long b) {
        long long ans = 1;
        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % MOD;
            }
            a = (a * a) % MOD;
            b /= 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long prime = n / 2;
        long long countEven = power(5, even);
        long long countPrime = power(4, prime);
        return (countEven * countPrime) % MOD;
    }
};