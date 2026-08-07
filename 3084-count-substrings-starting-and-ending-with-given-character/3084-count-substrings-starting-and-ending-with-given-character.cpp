class Solution {
public:
    long long countSubstrings(string s, char c) {
        int count = 0;
        for(char ch : s){
            if(ch == c){
                count++;
            }
        }
        return 1LL * count * (count + 1) / 2;
        
    }
};