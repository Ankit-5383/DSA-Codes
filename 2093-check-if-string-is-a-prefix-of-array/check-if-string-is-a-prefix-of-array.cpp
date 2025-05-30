class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check;
        
        for (string ch : words) {
            check.append(ch);
            
           
            if (check == s) return true;
            
        
            if (check.size() > s.size()) return false;
        }
        
        return false;
    }
};