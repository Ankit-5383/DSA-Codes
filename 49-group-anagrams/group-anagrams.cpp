class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<pair<string,string>> pairs; 
    for (string s : strs) {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());
        pairs.push_back({s, sortedStr});
    }

    
    sort(pairs.begin(), pairs.end(),
         [](auto &a, auto &b) {
             return a.second < b.second;
         });
    vector<vector<string>> result;
    vector<string> current;
    string prevKey = "";
    for (auto &p : pairs) {
        if (p.second != prevKey && !current.empty()) {
            result.push_back(current);
            current.clear();
        }
        current.push_back(p.first);
        prevKey = p.second;
    }
    if (!current.empty()) result.push_back(current);

    return result;
}
};