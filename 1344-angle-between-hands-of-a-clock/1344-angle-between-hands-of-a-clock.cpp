class Solution {
public:
    double angleClock(int hour, int minutes) {
        //One hour = 30 degree
        //one minute = 6 degree
        // 30 degree hour = 60 degree minute
        float h = 0;
        if(hour == 12){
            h = minutes*0.5;
        }
        else{
            h = (hour*30)+minutes*0.5;
        }
        float m = minutes * 6;
        float diff = abs(h-m);
        float ans = min(diff,360-diff);
        
        return ans;
        
    }
};