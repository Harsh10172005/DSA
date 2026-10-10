class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();
        vector<bool> visited(n, false); // check karna hai repeat kab ho rha hai
        for (int i = 0; i < n; i++) {
            if(visited[i]) continue; //agar wo cycle pehle aa chuki hai hai usko skip kar do
            int count = 0;
            int curr = i;
            while (!visited[curr]) {
                visited[curr] = true;
                curr = nums[curr];
                count++;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};