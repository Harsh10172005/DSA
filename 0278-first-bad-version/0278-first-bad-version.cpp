// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//agar mid bad nhi hai to low ko mid+1 kar do 
//agar mid bad hai to high ko mid - 1 kar do
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(isBadVersion(mid)==false){
                low = mid+1;
            }
            else{
                if(isBadVersion(mid-1)){
                    high = mid-1;
                }
                else{
                    return mid;
                }
            }
        }
        return -1;
        
    }
};