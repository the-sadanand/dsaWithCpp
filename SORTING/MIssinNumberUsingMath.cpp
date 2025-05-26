#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int NaturalSum=n*(n+1)/2;
        int arraySum=0;
        for(int i=0;i<n;i++){
            arraySum+=nums[i];
        }
        return NaturalSum-arraySum;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3, 0, 1};  // Example input
    int result = sol.missingNumber(nums);
    cout << "Missing number is: " << result << endl;
    return 0;
}