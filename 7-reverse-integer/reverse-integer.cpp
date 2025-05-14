class Solution {
public:
    int reverse(int x) {

        int32_t xresult = 0;
        string num = to_string(x);
        int sz = num.size();
        if (num[0] != '-') {
            for (int i = 0; i < sz / 2; i++) {
                swap(num[i], num[sz - 1 - i]);
            }
        } else {
             for(int i = 1; i < (sz + 1) / 2; i++) {
                swap(num[i], num[sz - i]);
            }
        }

        long long temp = stoll(num);
        if (temp < INT_MIN || temp > INT_MAX)
            return 0;
        xresult = (int32_t)temp;
        return xresult;
    }
};