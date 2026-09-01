class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates[0][0];
        int y = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for(int i = 2; i < coordinates.size(); i++) {
            int x3 = coordinates[i][0];
            int y3 = coordinates[i][1];
            if((y2-y)*(x3-x) != (y3-y)*(x2-x)) {
                return false;
            }
        }
        return true;
    }
};