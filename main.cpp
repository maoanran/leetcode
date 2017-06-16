#include <iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long x = num;
        while (x * x > num) {
            x = (x + num / x) / 2;
        }
        return x * x == num;
    }
};

int main() {
    Solution *s = new Solution();
    double v = s->isPerfectSquare(20623316);
    cout << v << endl;
    return 0;
}
