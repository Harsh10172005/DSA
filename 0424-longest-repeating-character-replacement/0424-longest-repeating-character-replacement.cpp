class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi = 0;
        int left = 0;
        int max_freq = 0;
        vector<int> freq(26,0);
        for(int right = 0;right<s.size();right++){
            freq[s[right] - 'A']++;
            // for (int i = 0; i < 26; i++) {
            //     max_freq = max(max_freq, freq[i]);
            // }
            max_freq = max(max_freq,freq[s[right] - 'A']); // ismpe max feq minus nhi karte but wo fir bhi valid hi rehta hai
            while(right-left+1-max_freq>k){
                freq[s[left] - 'A']--;
                left++;   
            }
            maxi = max(maxi,right-left+1);
            
        }
        return maxi;
        
    }
};