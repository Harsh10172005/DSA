class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int ans = 1;
        string a2 = a;
        if(a.length()>=b.length()){
            if(a.find(b) != string::npos){
                return 1;
            }
            else if((a+a).find(b) != string::npos){
                return 2;
            }
            else{
                return -1;
            }
        }
        while(a2.length()<=b.length()){
            a2+=a;
            ans++;
            if(a2.find(b)!=string::npos){
                return ans;
            }
                
        }
        a2 = a2+ a;
        if(a2.find(b)!=string::npos){
            return ans+1;
        }
        return -1;
        
    }
};