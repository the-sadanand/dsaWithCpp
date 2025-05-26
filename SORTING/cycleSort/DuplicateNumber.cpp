#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int i=0;
        while(i<len){
            int correctIdx=nums[i];
            if(nums[correctIdx]==nums[i]) return nums[i];
            else swap(nums[i],nums[correctIdx]);
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int>nums= {1,3,4,2,2};
    int result=sol.findDuplicate(nums);
    cout<<"Duplicate vaule is : "<<result;
}