class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;
        for(char ch : t) {
            mpp[ch]++;
        }
        for(char ch : s) {
            mpp[ch]--;
        }
        for(auto it : mpp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        return ' ';
    }
};