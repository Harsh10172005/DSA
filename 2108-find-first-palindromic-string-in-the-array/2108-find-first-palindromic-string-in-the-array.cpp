class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0;i<words.size();i++){
        bool palandrom = true;
            int l = 0;
            int r = words[i].size()-1;
            while(l<r){
                if(words[i][l]==words[i][r]){
                    l++;
                    r--;
                }
                else{
                    palandrom = false;
                    break;
                }
            }
            if(palandrom){
                return words[i];
            }
        }
        return "";
        
    }
};