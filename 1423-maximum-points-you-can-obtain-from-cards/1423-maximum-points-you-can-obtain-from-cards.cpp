class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = 0;
        int mini = INT_MAX;
        int sum = 0;
        int totalSum = 0;
        for (int i = 0; i < cardPoints.size(); i++) {
            totalSum += cardPoints[i];
        }
        for(int right = 0;right<cardPoints.size();right++){
            sum+=cardPoints[right];
            if(right-left+1>cardPoints.size()-k){
                sum-=cardPoints[left];
                left++;
            }
            if(right-left+1==cardPoints.size()-k){
                mini = min(mini,sum);
            }
        }
        return totalSum-mini;
    }
};