#include "LeetCode.h"

//O(n^2), O(n): not great, very slow. Can be improved with
//more knowledge of algorithms.

//169. Majority Element - easy
int LeetCode::majorityElement(std::vector<int>& nums){
    if (nums.size() == 1){
        return nums[0];
    }
    int temp_greatest = 0;
    int temp = 0;
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        temp = 0;
        for (int j = 0; j < nums.size(); j++){
            if (nums[j] == nums[i]){
                temp++;
            }
        }

        if (temp > temp_greatest){
            ans = nums[i];
            temp_greatest = temp;
        }

    }
    return ans;
}