class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;
        }

        bool hasVowel = false;
        bool hasConsonant = false;

        for (char ch : word) {
            if (!isalnum(ch)) {
                return false;  // Invalid character
            }

            if (isalpha(ch)) {
                char lowerCh = tolower(ch);
                if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh
                == 'o' || lowerCh == 'u') {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};

