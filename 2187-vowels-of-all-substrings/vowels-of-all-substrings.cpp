class Solution {
public:
   long long countVowels(string word) {
        
        long long count = 0;
        int len=word.size();
        for(int j = 0; j < word.size(); j++) {
            if(word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] =='o' || word[j]== 'u') {
                count  += (long)(len - j) * (long)(j + 1);
            }
        }
    return count;
}
};