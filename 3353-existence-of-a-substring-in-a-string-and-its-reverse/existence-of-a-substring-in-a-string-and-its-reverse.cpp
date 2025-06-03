class Solution {
    string swap(char s, char d){
        string res ;
        res.push_back(d);
        res.push_back(s);
        return res;
    }

public:
    bool isSubstringPresent(string s) {
        
       int n= s.size(); 
      for (int i = 0; i < n - 1; i++) { 
            int j = i + 1;
            string t = swap(s[i], s[j]);
            if(s.find(t) != string::npos){
                return true;
            }
        }

        return false;
    }
};