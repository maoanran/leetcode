#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int j = 0;
        for (int n : nums) {
            if (n != 0)
                nums[j++] = n;
        }
        while (j < nums.size()) {
            nums[j++] = 0;
        }
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> v{0, 1, 0, 3, 12};
    s->moveZeroes(v);

    for (int n : v) {
        cout << n << endl;
    }
    return 0;
}
