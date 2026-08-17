class Solution {
public:
    int longestSubstring(string s, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        for(auto it : mp) {
            if(it.second < k) {
                char bad = it.first;
                for(int i = 0; i < s.size(); i++) {
                    if(s[i] == bad) {
                        int left = longestSubstring(s.substr(0, i), k);
                        int right = longestSubstring(s.substr(i + 1), k);
                        return max(left,right);
                    }
                }
            }
        }
        return s.size();
    }
};