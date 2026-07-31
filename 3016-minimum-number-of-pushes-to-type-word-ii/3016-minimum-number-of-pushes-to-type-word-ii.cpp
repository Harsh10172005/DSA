class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(int i = 0;i<word.size();i++){
            freq[word[i]-'a']++;
        }
        sort(freq.rbegin(),freq.rend());//reverse sort iss liye kiya taki maximun repeated char ko kam se kam press lage
        int press = 0;
        for(int i = 0;i<26;i++){
            press += (i/8+1)*freq[i];
        }
        return press;
    }
};