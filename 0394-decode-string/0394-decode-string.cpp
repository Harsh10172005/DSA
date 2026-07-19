class Solution {
public:
    string repeat(string curr,int n){
        string temp;
        string ans ="";
        for(int i = 0;i<n;i++){
            temp+=curr;
        }
        return temp;
    }
    string decodeString(string s) {
        stack<int> stnum;
        stack<string> stst;
        string curr = "";
        int num = 0;
        for(int i = 0;i<s.size();i++){
            if(isdigit(s[i])){
                num = num*10 + s[i]-'0';
                
            }
            else{
                if(isalpha(s[i])){
                    curr+=s[i];
                }
                else if(s[i]=='['){
                    stnum.push(num);
                    num = 0;
                    stst.push(curr);
                    curr="";
                }
                else if(s[i]==']'){
                    curr = repeat(curr,stnum.top());
                    stnum.pop();
                    if(!stst.empty()){
                        curr = stst.top()+curr;
                        stst.pop();
                    }
                }
            }
        }
        return curr;
    }
};