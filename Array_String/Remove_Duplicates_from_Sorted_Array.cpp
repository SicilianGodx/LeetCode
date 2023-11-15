#include "LeetCode.h"

//O(n), O(1): pretty good. Could make it a bit more clean.

int LeetCode::removeDuplicates(std::vector<int>& nums){
    int index = 0;
    int i = 1;
    if (nums.size() == 1){
        return 1;
    }
    while (i < nums.size()){
        if (nums[index] == nums[i]){
            i++;
        }
        else{
            index++;
            nums[index] = nums[i];
        }
    }
    index++;
    return index;
}