class Solution {
public:
    int pivotInteger(int n) {
        int prev_sum = 0;
        int total_sum = 0;
        for(int i = 1 ;i<=n;i++){
            total_sum+=i;
        }
        int rest_sum = 0;
        for(int i = 1;i<=n;i++){
            prev_sum+=i;
            rest_sum = total_sum - prev_sum + i;
            if(prev_sum == rest_sum){
                return i;
            }
        }
        return -1;
    }
};