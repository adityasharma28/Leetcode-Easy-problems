class Solution {
public:
    unordered_map<char, int> alphabet;
    int romanToInt(string s) {
        initAlphabet();
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (alphabet[s[i]] < alphabet[s[i + 1]]) 
                result = result - alphabet[s[i]];
            else 
                result = result + alphabet[s[i]];
        }
        return result + alphabet[s.back()];
    }
    

    void initAlphabet() {
    alphabet = { {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} };
        };
};
