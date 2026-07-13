// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//agar mid bad nhi hai to low ko mid+1 kar do 
//agar mid bad hai to high ko mid - 1 kar do
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        while(low<high){
            int mid = low + (high - low)/2;
            if(isBadVersion(mid)==true){
                high = mid;
            }
            else{
                low = mid+1;
            }  
        }
        return low;
        
    }
};