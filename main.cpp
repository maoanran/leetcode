#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int> &nums, int target) {
        if (nums.size() == 0) {
            return false;
        }
        int l = 0, h = nums.size() - 1;

        // find smallest
        while (l <= h) {
            int m = (l + h) / 2;

            if (target == nums[m] || target == nums[h] || target == nums[l]) {
                return true;
            }

            if (nums[m] < nums[h]) {
                if (nums[m] < target && target < nums[h]) {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            } else if (nums[m] > nums[h]){
                if (nums[l] < target && target < nums[m]) {
                    h = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                h--;
            }
        }
        return false;
    }
};

int main() {
    Solution *s = new Solution();
//    vector<int> nums{4, 5, 6, 0, 1, 2};
//    vector<int> nums{0, 1, 2, 3, 4};
//    vector<int> nums{ 2, 3, 4, 0, 1};
//    vector<int> nums{4, 0, 1, 2, 3};
//    vector<int> nums{0, 4};
//    vector<int> nums{4, 0};
//    vector<int> nums{1};
    vector<int> nums{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    bool v = s->search(nums, 0);
    cout << v << endl;
    return 0;
}
