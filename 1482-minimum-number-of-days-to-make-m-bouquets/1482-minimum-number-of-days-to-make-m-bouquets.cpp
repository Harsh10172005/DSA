class Solution {
public:
    bool canDay(vector<int>& bloomDay, int m, int k , int minDay){
        int flower = 0;
        int bouquets = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i]<=minDay){
                flower++;
            }
            else{
                flower = 0;
            }
            if(flower == k){
                bouquets++;
                flower = 0;
            }
        }
        return bouquets>=m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL * m * k > bloomDay.size()) return -1;
        int low = INT_MAX;
        int high = 0;
        for(int i = 0;i<bloomDay.size();i++){
            low = min(low,bloomDay[i]);
            high = max(high,bloomDay[i]);
        }
        while(low<=high){
            int minDay = low + (high-low)/2;
            if(canDay(bloomDay,m,k,minDay)){
                high = minDay-1;
            }
            else{
                low = minDay+1;
            }
        }
        return low;
    }
};