#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = 0;
        for (int n : nums) {
            if (n != val) {
                nums[pos++] = n;
            }
        }
        int result = pos;
        while (pos < nums.size()) {
            nums[pos++] = val;
        }
        return result;
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> v{3, 2, 2, 3, 12};
    int result = s->removeElement(v, 3);

    for (int n : v) {
        cout << n << endl;
    }

    cout << result << endl;

    return 0;
}
