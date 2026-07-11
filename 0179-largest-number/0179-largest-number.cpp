class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size()-i-1;j++){
                string a = to_string(nums[j]);
                string b = to_string(nums[j+1]);
                if(a+b<b+a){
                    swap(nums[j],nums[j+1]);
                } 
            }   
                
        }
        if(nums[0]==0){
            return "0";
        }
        
        string s = "";
        for (int x : nums) {
            s += to_string(x);
        }
        return s;
        
    }
};