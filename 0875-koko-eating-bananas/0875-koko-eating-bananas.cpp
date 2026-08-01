class Solution {
public:
    bool canEat(vector<int>& piles, int h , int speed){
        bool check = false;
        long long count = 0;
        for(int i = 0;i<piles.size();i++){
                int a = piles[i]/speed;
                int b = piles[i]%speed;
                count+=a;
                if(b!=0){
                    count++;
                }
        }
        if(count <= h){
            check = true;
            return check;
        }
        return check;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for(int i = 0;i<piles.size();i++){
            high = max(high,piles[i]);
        }
        while(low<=high){
            int speed = low + (high-low)/2;
            if(canEat(piles,h,speed)){
                high = speed-1;
            }
            else{
                low = speed+1;
            }
        }
        return low;
    }
};