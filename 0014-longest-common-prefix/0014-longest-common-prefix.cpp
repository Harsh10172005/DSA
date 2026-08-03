class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        string start = strs[0];
        string end = strs[strs.size()-1];
        int i = 0;
        int j = min(start.size(),end.size());
        while(i<j){
            if(start[i]==end[i]){
                ans+=start[i];
                i++;
            }
            else{
                break;
            }
        }
        return ans;

    }
};