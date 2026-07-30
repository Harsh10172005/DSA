class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()) return ans;
        vector<int> need(26,0);
        vector<int> window(26,0);
        int left = 0;
        for (int i = 0;i<p.size();i++){
            need[p[i]-'a']++;
        }
        for(int right = 0;right<s.size();right++){
            window[s[right]-'a']++;
            while(right-left+1>p.size()){
                window[s[left]-'a']--;
                left++;
            }
            if(need == window){
                ans.push_back(left);
            }
        }
        return ans;
        
        
    }
};