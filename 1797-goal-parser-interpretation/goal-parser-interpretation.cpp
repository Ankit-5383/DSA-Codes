class Solution {
public:
    string interpret(string command) {
        string res;
        for (int i = 0; i < command.size(); ) {
            if (command[i] == 'G') {
                res += 'G';
                i++;
            } else if (command[i] == '(' && command[i + 1] == ')') {
                res += 'o';
                i += 2;
            } else if (command.substr(i, 4) == "(al)") {
                res += "al";
                i += 4;
            }
        }
        return res;
    }
};
