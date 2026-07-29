class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(250,0);
        int left = 0;
        int maxi = 0;
        for(int right = 0;right<s.size();right++){
            freq[s[right]]++;
            if(freq[s[right]]>1){
                while(freq[s[right]]>1){
                    freq[s[left]]--;
                    left++;
                }
            }
            else{
                maxi = max(maxi,right-left+1);
            }
        }
        return maxi;
    }
};