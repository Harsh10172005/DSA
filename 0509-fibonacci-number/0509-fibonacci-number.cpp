class Solution {
public:
    int fibo(int n){
        if(n<=1){
            return n;
        }
        return fibo(n-1)+fibo(n-2);
    }
    int fib(int n) {
    // if (n <= 1)
    //     return n;
    // int f1 = 0;
    // int f2 = 1;
    // int fibo = 0;
    // for (int i = 2; i <= n; i++) {
    //     fibo = f1 + f2;
    //     f1 = f2;
    //     f2 = fibo;
    // }
    // return fibo;
    int ans = fibo(n);
    return ans;

    }
};