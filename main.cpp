#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        if (nums.size() < 2) {
            return {};
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    s->twoSum(v, 9);
    return 0;
}
