#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.size() == 0) {
            return -1;
        }
        int l = 0, h = nums.size() - 1;

        // find smallest
        while (l < h) {
            int m = (l + h) / 2;
            if (nums[m] < nums[h]) {
                h = m;
            } else {
                l = m + 1;
            }
        }
        cout << "smallest num:" <<  nums[l] << endl;

        if (target >= nums[l] && target <= nums[nums.size() - 1]) {
            h = nums.size() - 1;
        } else {
            l = 0;
        }

        while (l <= h) {
            int m = (l + h) / 2;
            if (target > nums[m]) {
                l = m + 1;
            } else if (target < nums[m]) {
                h = m - 1;
            } else {
                return m;
            }
        }
        return -1;
    }
};

int main() {
    Solution *s = new Solution();
//    vector<int> nums{4, 5, 6, 0, 1, 2};
//    vector<int> nums{0, 1, 2, 3, 4};
//    vector<int> nums{1, 2, 3, 4, 0};
//    vector<int> nums{4, 0, 1, 2, 3};
//    vector<int> nums{0, 4};
//    vector<int> nums{4, 0};
//    vector<int> nums{1};
    vector<int> nums{};
    int v = s->search(nums, 0);
    cout << v << endl;
    return 0;
}
