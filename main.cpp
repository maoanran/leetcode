#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) {
            return 0;
        }
        if (n == 0)
            return 1;
        if (n == INT_MIN) {
            return 1 / (x * x * myPow(x * x, (n + 2) / -2));
        }
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        return n & 1 ? x * myPow(x * x, n / 2) : myPow(x * x, n / 2);
    }
};

int main() {
    Solution *s = new Solution();
    double v = s->myPow(2.00000, -2147483648);
    cout << v << endl;
    return 0;
}
