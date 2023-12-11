#include "LeetCode.h"

//O(n), O(n); good solution using a hashmap, code can be cleaned up
//and also improved to O(1) space complexity.

//169. Majority Element - easy
int LeetCode::majorityElement(std::vector<int>& nums){
    std::unordered_map<int, int> count;
    for(int i = 0; i < nums.size(); i++){
        count[nums[i]]++;
    }
    int maxVal = nums[0];
    for (std::unordered_map<int,int>::iterator itr = count.begin(); itr != count.end(); itr++){
        if ((*itr).second > count[maxVal]){
            maxVal = (*itr).first;
        }
    }
    return maxVal;
}