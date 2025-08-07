class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;

        // Split the string s into words
        while (iss >> word) {
            words.push_back(word);
        }
        if (words.size() != pattern.size()) return false;
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); ++i) {
            char ch = pattern[i];
            string w = words[i];
            if (charToWord.count(ch)) {
                if (charToWord[ch] != w) return false;
            } else {
                if (wordToChar.count(w)) return false;
                charToWord[ch] = w;
                wordToChar[w] = ch;
            }
        }
        return true;
    }
};
