class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }
        int charCounts[26] = {0};
        for (char c : magazine) {
            charCounts[c - 'a']++;
        }
        for (char c : ransomNote) {
            if (charCounts[c - 'a'] == 0) {
                return false;
            }
            charCounts[c - 'a']--;
        }
        return true;
    }
};