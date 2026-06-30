class Solution {
public:
   string reverseWords(string s) {
        string r;
        int j = s.size()-1;
        int i = s.size()-1;
        while(j>=0){
            int k = 0;
            if(s[j]==' '){
                j--;
                i--;
            }
            else{
                while(i>=0 && s[i]!=' ' ){
                    i--;
                    k++;
                } 
                r+=s.substr(i+1,k);
                r+=' ';
            }
            
            j=i;  
        }
        r.pop_back();
        return r;
        
    }
};