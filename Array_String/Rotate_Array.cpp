#include "LeetCode.h"

//O(n), O(n); good time complexity, there's probably a way to 
//do this without the use of an extra temp vector to get to 
//O(1) space complexity.

//189. Rotate Array - medium
void LeetCode::rotate(std::vector<int>& nums, int k){
    std::vector<int> temp;
    int len = nums.size();
    int j = 0;
    while (k > len){
        k = k - len;
    }
    for (int i = 0; i < len; i++){
            if (i < k){
                temp.push_back(nums[(len - k) + i]);
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
    }
    nums = temp;
}