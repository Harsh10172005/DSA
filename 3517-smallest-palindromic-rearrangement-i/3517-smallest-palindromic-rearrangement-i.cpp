class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int count[26]={0};
        for(int i = 0;i<n/2;i++){ // pehle se hi palindrome hai to bas midddle se pehle walon ko chote me arrange karo than middle as it is than reverse of jo tune arrange kiya hai
            count[s[i]-'a']++;
        }
        int index = 0;
        for(int i = 0;i<26;i++){
            while(count[i]>0){
                s[index]=(char)(i+'a');//arranging
                index++;
                count[i]--; // duplicates handle
            }
        }
        for(int i = 0;i<n/2;i++){
            s[n-1-i]=s[i]; // afater middle half ho arrange karna
        }
        return s;
        
    }
};