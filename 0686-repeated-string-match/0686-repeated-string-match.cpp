class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeat = a;
        int count = 1;

        // Repeat karo jab tak repeat a b ke barabar na ho jaye
        while (repeat.length() < b.length()) {
            repeat += a;
            count++;
        }

        //check karo b present hai ya nhi
        if (repeat.find(b) != string::npos) {
            return count;
        }

        // Check karo boundary and overlap cases ke liye
        repeat += a;
        count++;

        if (repeat.find(b) != string::npos) {
            return count;
        }

        return -1;
    }
};
        
