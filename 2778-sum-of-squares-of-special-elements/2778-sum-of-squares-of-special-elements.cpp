class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cout<<sum;
                int number = nums[i-1];
                long long sqr = number * number;
                sum+=sqr;
            }
        }
        return sum;       
    }
};