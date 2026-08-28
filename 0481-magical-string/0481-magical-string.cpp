class Solution {
public:
    int magicalString(int n) {
        vector<int> s = {1, 2, 2};
        int i = 2;
        int current = 1;
        while(s.size() < n) {
            int times = s[i];
            for(int j = 0; j < times; j++) {
                s.push_back(current);
            }
            current = 3 - current;
            i++;
        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 1)
                count++;
        }
        return count;      
    }
};