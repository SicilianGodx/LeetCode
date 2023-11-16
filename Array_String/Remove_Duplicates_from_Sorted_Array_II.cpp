#include "LeetCode.h"

//O(n), O(n): works by first recognizing the vector needs to be
//at least size=3, and having the first index places at the 
//beginning of the vector and the second index+2 in front.

int LeetCode::removeDuplicatesII(std::vector<int>& nums){
    int index = 0;
    for (int i = 0; i < nums.size(); i++){
        if (index == 0 || index == 1 || nums[i-2]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}