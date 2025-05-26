#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correctIdx=nums[i];
            if(correctIdx==i || nums[i]==n) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0; i<n ;i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }
};

int main(){
    Solution sol;
    vector<int>nums{1,0,3};
    int result=sol.missingNumber(nums);
    cout<<"missing value is : "<<result;
}