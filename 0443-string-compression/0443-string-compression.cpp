class Solution {
public:
    int compress(vector<char>& chars) {
        int ans_count = 0;
        int i = 0;
        while(i<chars.size()){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            cout<<count<<endl;
            chars[ans_count] = ch;
            ans_count++;
            if(count>1){
                string s = to_string(count);
                for(int i=0;i<s.size();i++){
                    chars[ans_count]=s[i];
                    ans_count++;
                }
            }
        }
        return ans_count;
    }
};