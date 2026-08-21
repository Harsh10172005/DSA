class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            pq.push({it.second,it.first});
        }
        for(int i = 0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;


    }
};