class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int a = 0;
        int t = 0;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
             else{
                a=i;
                i = t;
                i++;
                t++;
                a=i;
                j=0;
            }
            if(j==needle.size()){
                return a;
            }
           
                
        }
        return -1;
    }
};