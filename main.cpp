#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        multiset<int> set;
        for (int i : nums) {
            set.insert(i);
        }
        std::multiset<int>::iterator iter = set.begin();
        std::advance(iter, set.size() - k);
        return *iter;
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> nums{3, 2, 3, 1, 2, 4, 5, 5, 6};
    int v = s->findKthLargest(nums, 4);
    cout << v << endl;
    return 0;
}
