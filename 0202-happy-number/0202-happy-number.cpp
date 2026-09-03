class Solution {
public:
    int Happy(int n){
        int sum = 0;       
        while(n>0){
            int sqr = n%10;
            sum+=sqr*sqr;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while( n != 1){
            if(st.count(n)) return false;
            st.insert(n);
            n = Happy(n);
        }
        return true;
    }
};