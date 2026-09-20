class Solution {
public:
    int longestPalindrome(string s) {
        int length = 0;
        bool oddcheck = false;
        unordered_map<char,int> mpp;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto it : mpp){
            if(it.second%2==0){
                length+=it.second;
            }
            else{
                length += it.second-1;
                oddcheck = true;
            }
        }
        if(oddcheck){
            length++;
        }     
        return length;   
    }
};