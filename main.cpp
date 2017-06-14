#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 1) {
            return 0;
        }
        int pos = 1;
        int last = nums[0];
        for(int n : nums) {
            if(n != last) {
                nums[pos++] = n;
                last = n;
            }
        }
        return pos;
    }
};

int main() {
    Solution *s = new Solution();
    vector<int> v{2, 2, 3, 3, 12};
    int result = s->removeDuplicates(v);

    for (int n : v) {
        cout << n << endl;
    }

    cout << "result" << result << endl;

    return 0;
}
