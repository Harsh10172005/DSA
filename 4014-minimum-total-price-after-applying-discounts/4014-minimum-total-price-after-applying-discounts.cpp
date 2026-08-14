class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double price = 0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i = prices.size()-1;
        int j = discounts.size()-1;
        while(i>=0 && j>=0){
            price += prices[i]*(100-discounts[j])/100.0;
            i--;
            j--;
        }
        if(i>=0){
            while(i>=0){
                price+=prices[i];
                i--;
            }
        }
        return price;
        
    }
};