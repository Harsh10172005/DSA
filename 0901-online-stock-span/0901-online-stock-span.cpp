class StockSpanner {
    stack<pair<int,int>> st;
    int days = 0;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 0;
            while(!st.empty()&&st.top().first<=price){
                st.pop();
            }
            if(st.empty()){
                ans = days+1;
            }
            else{
                ans = days - st.top().second;
            }
        st.push({price,days});
        days++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */