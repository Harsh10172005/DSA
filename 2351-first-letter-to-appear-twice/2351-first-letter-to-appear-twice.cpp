class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mpp;
        for(char ch : s) {
            if(mpp[ch]==0){
                mpp[ch]++;
            }
            else{
                return ch;
            }
        }
        return ' ';
    }
};