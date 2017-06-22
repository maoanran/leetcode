#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int> &nums) {
        long first = LONG_MIN,
                second = LONG_MIN,
                third = LONG_MIN;
        for (int n : nums) {
            if (n == first || n == second || n == third) {
                continue;
            }
            if (n > first) {
                third = second;
                second = first;
                first = n;
            } else if (n > second) {
                third = second;
                second = n;
            } else if (n > third) {
                third = n;
            }
        }
        return third == LONG_MIN ? first : third;
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> nums{2, 2, 3, 1};
//    vector<int> nums{1, 2};
    int v = s->thirdMax(nums);
    cout << v << endl;
    return 0;
}
