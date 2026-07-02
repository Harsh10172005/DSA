class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int j = 0;
        if(name[i]!=typed[j]){
            return false;
        }
        
        while(i<name.size() || j<typed.size()){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(typed[j]==typed[j-1]){
                j++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};