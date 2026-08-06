class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sum_b = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int d = (sum_a-sum_b)/2;
        sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());
        int i = 0;
        int j = 0;
        while(i<aliceSizes.size() && j<bobSizes.size()){
            int diff = aliceSizes[i]-bobSizes[j];
            if(diff == d) return{aliceSizes[i],bobSizes[j]};
            else if(diff<d){
                i++;
            }
            else{
                j++;
            }
        }
        return {-1,-1};
    }
};