#include "LeetCode.h"

//O(n), O(n): extra memory used creating the temp vector. Can reduce
//space complexity by not including and making the changes directly
//to the vector.

int LeetCode::removeElement(std::vector<int>& nums, int val){
    int track = 0;
    std::vector<int> ans;

    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == val){

        }
        else{
            ans.push_back(nums[i]);
        }
    }
    nums = ans;
    return nums.size();
}