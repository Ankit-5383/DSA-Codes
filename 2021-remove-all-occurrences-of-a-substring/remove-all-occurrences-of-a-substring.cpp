class Solution {

public:
    string removeOccurrences(string s, string part) {
        bool check = true;
        while (check) {
            size_t pos = s.find(part);

            if (pos != string::npos) {
                s.erase(pos, part.length());
            }else{
                check=false;
            }
        }
        return s;
    }
};