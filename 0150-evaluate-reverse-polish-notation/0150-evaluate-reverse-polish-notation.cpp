class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0;i<tokens.size();i++){
            if (tokens[i] != "+" &&
                tokens[i] != "-" &&
                tokens[i] != "*" &&
                tokens[i] != "/"){
                    st.push(stoi(tokens[i]));
                }
            else{
                int k = st.top();
                st.pop();
                int j = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    st.push(j+k);
                }
                else if(tokens[i]=="-"){
                    st.push(j-k);
                }
                else if(tokens[i]=="*"){
                    st.push(j*k);
                }
                else if(tokens[i]=="/"){
                    st.push(j/k);
                }
            }
        }
        return st.top();
    }
};