class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size()+nums2.size();
        int previous = 0;
        int current = 0;
        int count = 0;
        int i = 0;
        int j = 0;
        double ans = 0;
        while(count<=total/2){
            if(i==nums1.size()){
                previous = current;
                current = nums2[j];
                j++;
            }
            else if(j==nums2.size()){
                previous = current;
                current = nums1[i];
                i++;
            }
            else if(i<nums1.size() && nums1[i]<=nums2[j]){
                previous = current;
                current = nums1[i];
                i++;
            }
            else if(j<nums2.size() && nums2[j]<nums1[i]){
                previous = current;
                current = nums2[j];
                j++;
            }
            count++;
            
        }
        if(total%2==0){
            ans = (current+previous)/2.0;
        }
        else{
            ans = current;
        }
        return ans;
        
    }
};