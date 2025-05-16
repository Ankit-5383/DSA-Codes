class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";
        for(char c : s) {
            if(isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        for(int i=0;i<cleaned.size()/2;i++){
            if(cleaned[i] != cleaned[cleaned.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};