#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        if (nums.size() < 2) {
            return {};
        }
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int wanted = target - nums[i];
            if (map.find(wanted) != map.end()) {
                return {map[wanted] + 1, i + 1};
            }
            map[nums[i]] = i;
        }
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> v{1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13};
    s->twoSum(v, 9);
    return 0;
}
