#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long l = x;
        while (l * l > x) {
            l = (l + x / l) / 2;
        }
        return l;
    }
};

int main() {
    Solution *s = new Solution();
    int v = s->mySqrt(2147395599);
    cout << v << endl;
    return 0;
}
