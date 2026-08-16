class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
            while(n >= 0 && digits[n] == 9){ //agar last me 9 ho to usko 0 kar do than n-- kar do
                digits[n] = 0;
                n--;
            }
            if(n >= 0){
                digits[n]++;//n ko ek se bada do
            }
            else {
                digits.insert(digits.begin(), 1);//agar 999 ho to starting me 1 daal do than sab 000
            }
        return digits;        
    }
};