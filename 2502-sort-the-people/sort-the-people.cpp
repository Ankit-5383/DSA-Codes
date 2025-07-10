class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> heightToName;

       
        for (int i = 0; i < names.size(); ++i) {
            heightToName[heights[i]] = names[i];
        }

        // Extract sorted names
        vector<string> result;
        for (auto& entry : heightToName) {
            result.push_back(entry.second);
        }

        return result;
    }
};
