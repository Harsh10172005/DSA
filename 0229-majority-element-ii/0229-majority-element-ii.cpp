class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int count1=0;
        int element1 =0;
        int count2=0;
        int element2 = 0;
        int freq1=0;
        int freq2=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==element1){
                count1++;
            }
            else if(nums[i]==element2){
                count2++;
            }
            else if(count1==0){
                element1 = nums[i];
                count1=1;
            }
            else if(count2==0){
                element2 = nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==element1){
                freq1++;
            }
            else if(nums[i]==element2){
                freq2++;
            }
        }
        if(freq1>nums.size()/3){
            ans.push_back(element1);
        }
        if(element2!=element1 && freq2>nums.size()/3){
            ans.push_back(element2);
        }
        return ans;
        
    }
};