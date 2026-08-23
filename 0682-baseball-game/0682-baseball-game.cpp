class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> track;
        for(int i = 0;i<operations.size();i++){
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+"){
                track.push_back(stoi(operations[i]));
            }
            else if(operations[i]=="C"){
                track.pop_back();
            }
            else if(operations[i]=="D"){
                track.push_back(track.back()*2);
            }
            else{
                track.push_back(track[track.size()-1]+track[track.size()-2]);
            }
        }
        int sum = 0;
        for(int i = 0;i<track.size();i++){
            sum+=track[i];
        }
        return sum;
        
    }
};