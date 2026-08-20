class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 1;i<s.size();i++){
            char ch = s[i];
            char ch2 = s[i-1];
            if(ch-ch2==0 || ch-ch2==32 || ch2-ch==32){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
        
    }
};