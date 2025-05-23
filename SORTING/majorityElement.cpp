#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() / 2;
        return nums[n];
    }
};

int main() {
    Solution solution;
    
    // Example input
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    // Calling the function
    int result = solution.majorityElement(nums);

    // Output the result
    cout << "Majority Element: " << result << endl;

    return 0;
}
