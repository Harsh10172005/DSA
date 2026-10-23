class Solution {
public:
    int numberOfMatches(int n) {
        int matche=0;
        while(n>1){
            if(n%2!=0){
                 matche += (n/2 + 1);
            }
            else{
                matche += n/2;
            }     
            n=n/2;
        }
        return matche;
    }
};