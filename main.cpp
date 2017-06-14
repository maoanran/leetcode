#include <iostream>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int l = s.size();
        for (int i = 0; i < l / 2; i++) {
            swap(s[i], s[l - i - 1]);
        }
        return s;
    }
};

int main() {
    Solution *s = new Solution();
    string v = s->reverseString("a.");
    cout << v << endl;
    return 0;
}
