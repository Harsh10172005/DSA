class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int length = 0;
        unordered_map<int,int> mpp{{0,-1}};
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                sum--;//agar 0 aaye to -1 ho jaye
            }
            else{
                sum++;//agar 1 aaye to 0 ho jaye
            }
            if(mpp.contains(sum)){
                length = max(length,i-mpp[sum]);//agar sum 0 hua to length hoga i-(-1) hi hoga
            }
            else{
                mpp[sum]=i;//ye sab pehli baar hoga jab prefix sum -1 hoga tab -1 pe 0 freq aayegi
            }
        }
        return length;
    }
};