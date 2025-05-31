class Solution {

    bool isPalindrom(string a){
        int n=a.size();
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-1-i]){
                return false;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for( string ch: words){
            if(isPalindrom(ch)){
                return ch;
            }
        }
        return "";
    }
};