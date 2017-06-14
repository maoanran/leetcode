#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if (words.size() < 1) {
            return {};
        }
        int num = words.size();
        int len = words[0].size();
        unordered_map<string, int> dict;
        vector<int> result;
        for (string word: words) {
            dict[word]++;
        }
        for (int i = 0; i < s.size() - num * len + 1; ++i) {
            unordered_map<string, int> tmp;
            for (int j = 0; j < num; ++j) {
                string str = s.substr(i + j * len, len);
                if (j == num - 1 && tmp[str] == dict[str] - 1) {
                    result.push_back(i);
                } else if (tmp[str] < dict[str]) {
                    tmp[str]++;
                } else {
                    break;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution *s = new Solution();
    vector<string> words{"word", "good", "best", "good"};
    vector<int> v = s->findSubstring("wordgoodgoodgoodbestword", words);

    for (int n : v) {
        cout << n << endl;
    }

    return 0;
}
