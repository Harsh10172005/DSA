class Solution {
public:
    bool canShip(vector<int>& weights, int days , int capacity){
        bool ship = false;
        int count = 1;
        int cap = 0;
        for(int i = 0;i<weights.size();i++){
            if(cap+weights[i]>capacity){
                count++;
                cap = weights[i];
            }
            else{
               cap+=weights[i];
            }
        }
        if(count<=days){
            ship = true;
            return ship;
        }
        return ship;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        for(int i = 0;i<weights.size();i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int capacity = low + (high-low)/2;
            if(canShip(weights,days,capacity)){
                high = capacity-1;
            }
            else{
                low = capacity+1;
            }
        }
        return low;

    }
};