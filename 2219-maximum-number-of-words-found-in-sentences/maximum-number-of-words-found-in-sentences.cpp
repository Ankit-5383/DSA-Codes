class Solution {
    int getSpaceCount(const string& str) {
        int count = 0;
        for(char ch : str) count += (ch == ' ');
        return count;
    }

public:
    int mostWordsFound(const vector<string>& sentences) {
        int maxWords = 0;

        for(const auto& sen : sentences) {
            int spaceInSen = getSpaceCount(sen);
            maxWords = max(maxWords, spaceInSen);
        }

        return maxWords + 1;
    }
};