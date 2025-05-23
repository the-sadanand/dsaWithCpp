#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator> // for istream_iterator
using namespace std;
class Solution{
public:
    int majorityElement(vector<int>&nums){
        sort(nums.begin(),nums.end());
        int n = nums.size()/2;
        return nums[n];
    }
};

int main(){
    Solution solution;
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements:";
    // Using istream_iterator to read input directly into the vector
    copy_n(istream_iterator<int>(cin),n,nums.begin());
    int result = solution.majorityElement(nums);
    cout<<"Majority Element: "<<result<<endl;
}