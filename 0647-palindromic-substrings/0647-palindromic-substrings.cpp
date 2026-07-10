class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            string check;
            for(int k = i;k<s.size();k++){
                check+=s[k];
                int left = 0;
                int right = check.size()-1;
                bool c = true;
                while(left<=right){
                    if(check[left]==check[right]){
                        left++;
                        right--;
                    }
                    else{
                        c = false;
                        break;
                    }
                    
                }
                if(c==true){
                    ans++;
                }
            }
        }
        return ans;
    }
};