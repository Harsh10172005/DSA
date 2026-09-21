class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        // int count = -1;
        // for(int i = 0;i<s.size();i++){
        //     for(int j = i+1;j<s.size();j++){
        //         if(s[i]==s[j]){
        //             count = max(count,j-i-1);
        //         }
        //     }
        // }
        // return count;  
        int count = -1;
        vector<int> first(26,-1);
        for(int i = 0;i<s.size();i++){
            int idx = s[i]-'a';
            if(first[idx]==-1){
                first[idx]=i;
            }
            else{
                count = max(count,i-first[idx]-1);
            }
        }  
        return count;
    }
};