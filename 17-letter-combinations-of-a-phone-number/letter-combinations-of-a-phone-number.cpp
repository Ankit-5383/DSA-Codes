class Solution {
    vector<string>allcomb;
    string currcomb;
public:

void getcombination(string& input,vector<string>&keypad, int index){

    if(index==input.size()){
        allcomb.push_back(currcomb);
        
        return ;
    }

    int padval=(input[index]-'0')-1;
    for( char ch : keypad[padval]){
        currcomb.push_back(ch);
        getcombination(input,keypad,index+1);
        currcomb.pop_back();
    }
}

    vector<string> letterCombinations(string digits) {

        if(digits.size()==0){
            return allcomb;
        }
      vector<string>keypad={" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
       int index=0;

    getcombination(digits,keypad,index);

    return allcomb;
    }
};