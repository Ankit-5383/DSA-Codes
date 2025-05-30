class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check;
        for(string ch: words){
            check.append(ch);
        }
        if(check.size()<s.size()){
            return false;
        }
        int i=0;
        int j=0;


        while(i<s.size() && j<words.size()){
            int sz= words[j].size();
            string res= s.substr(i, sz);
            if(res!=words[j]){
                return false;
            }
            i=i+sz;
            j++;
        }

       return true;
    }
};