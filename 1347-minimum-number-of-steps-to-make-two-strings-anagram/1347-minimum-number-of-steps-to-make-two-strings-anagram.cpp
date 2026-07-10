class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i = 0;i<s.size();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto ch : m1){ //hum dekhenge ki s me kon sa jayada hai t se jo jayada hai whi to add karna hoga t me (baki t me jo jayada hai usse hame farak nhi padta )
            if(ch.second>m2[ch.first]){
                ans+=ch.second-m2[ch.first];
            }
        }
        return ans;
    }
};