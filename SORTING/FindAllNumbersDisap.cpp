#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int>ans;
        while(i<n){
            int correctIdx=nums[i]-1;
            if(nums[i]==nums[correctIdx] || i==correctIdx) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(i+1); 
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums={4,3,2,7,8,2,3,1};
    vector<int> ans=sol.findDisappearedNumbers(nums);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}