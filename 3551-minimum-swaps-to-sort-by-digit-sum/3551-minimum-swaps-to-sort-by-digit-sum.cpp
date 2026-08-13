class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<vector<int>> arr;
        for(int i = 0;i<nums.size();i++){
            int n = 0;
            int t = nums[i];
            while(t){
                n+=t%10;
                t/=10;
            }
            arr.push_back({{n,nums[i],i}});
        }
        sort(arr.begin(),arr.end());
        vector<bool> visited(nums.size(), false);//ek vector hogi visited se jsime sab false hoga

        int swaps = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(visited[i] || arr[i][2] == i) //agar visited ke i pe true hai or index same hai dono ka to uss case me skip hoga
                continue;
            int cycleSize = 0;
            int j = i;//ye cycle cover karega
            while(!visited[j]) {
                visited[j] = true;
                j = arr[j][2];
                cycleSize++;
            }
            swaps += cycleSize - 1;
        }
        return swaps;       
    }
};