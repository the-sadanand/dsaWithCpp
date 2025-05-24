#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        int i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    // Example inputs
    vector<int> greedFactors = {1, 2, 3,8,9,3};
    vector<int> cookieSizes = {1, 1,4,5,3};

    int result = solution.findContentChildren(greedFactors, cookieSizes);
    
    cout << "Number of content children: " << result << endl;

    return 0;
}
