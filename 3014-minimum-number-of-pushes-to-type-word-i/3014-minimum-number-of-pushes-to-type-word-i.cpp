class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8){
            return word.size();
        }
        else if(word.size()>=9 && word.size()<=16){
            return word.size()+word.size()-8;
        }
        else if(word.size()>=17 && word.size()<=24){
            return word.size()+word.size()-8+word.size()-16;
        }
        else{
            return word.size()+word.size()-8+word.size()-16+word.size()-24;
        }
        
    }
};