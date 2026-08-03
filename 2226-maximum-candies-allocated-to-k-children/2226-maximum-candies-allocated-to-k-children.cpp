class Solution {
public:
    bool canGet(vector<int>& candies, long long k , int maxCandies){
        long long count = 0;
        for(int i = 0;i<candies.size();i++){
            int a = candies[i]/maxCandies;
            count+=a;
        }
        return count>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = 0;
        for(int i = 0;i<candies.size();i++){
            high = max(high,candies[i]);
        }
        while(low<=high){
            int maxCandies = low + (high-low)/2;
            if(canGet(candies,k,maxCandies)){
                low = maxCandies+1;
            }
            else{
                high = maxCandies-1;
            }
        }
        return high;
        
    }
};