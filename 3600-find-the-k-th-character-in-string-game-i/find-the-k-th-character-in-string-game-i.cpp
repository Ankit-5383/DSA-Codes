class Solution {
   void genrateCurrStr(string &currstr,string &prevstr){
       string temp=currstr;
       for(char ch:temp){
          char t = ch=='z' ? 'a' : ch+1;
          currstr.push_back(t);
       }
       prevstr=prevstr+currstr;
   }
public:
// store the gentrrated string 
// upadate the string  by appending ht enew string 
    char kthCharacter(int k) {
        string prevstr="ab";
        string currstr="b";
        while(k > prevstr.size()){
           genrateCurrStr(currstr, prevstr);
        }
        cout<< prevstr;
        return prevstr[k-1];
    }
};