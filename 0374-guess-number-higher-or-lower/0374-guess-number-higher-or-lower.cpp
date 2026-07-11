/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 0;
        int high = n;
        while(low<=high){
            int ans = low +(high - low)/2;
            int bs = guess(ans);
            if(bs==0){
                return ans;
            }
            else if(bs==-1){
                 high = ans-1;
            }
            else{
                low = ans+1;
            }
        }
        return 0;
    }
};