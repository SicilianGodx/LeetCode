#include "LeetCode.h"

LeetCode::LeetCode(){}


//88. Merge Sorted Array - easy
void LeetCode::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    int last_index = (m + n) - 1;

    while ((m > 0) && (n > 0)){
        if (nums1[m - 1] > nums2[n - 1]){
            nums1[last_index] = nums1[m - 1];
            m--;
        }
        else{
            nums1[last_index] = nums2[n - 1];
            n--;
        }
        last_index--;
    }

    //edge case: in case the lowest value of nums2 is smaller than the lowest value of nums1
    while(n > 0){
        nums1[last_index] = nums2[n - 1];
        n--;
        last_index--;
    }
}

//27. Remove Element - easy
int LeetCode::removeElement(std::vector<int>& nums, int val){
    int track = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] != val){
            nums[track] = nums[i];
            track++;
        }
    }
    return track;
}

//26. Remove Duplicates from Sorted Array - easy
int LeetCode::removeDuplicates(std::vector<int>& nums){
    int index = 1;
    for (int i = 1; i < nums.size(); i++){
        if (nums[i] != nums[i - 1]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

//80. Remove Duplicates from Sorted Array II - medium
int LeetCode::removeDuplicatesII(std::vector<int>& nums){
    int index = 0;
    for (int i = 0; i < nums.size(); i++){
        if (index == 0 || index == 1 || nums[index-2] != nums[i]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

//169. Majority Element - easy
int LeetCode::majorityElement(std::vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n/2];
}

//189. Rotate Array - medium
void LeetCode::rotate(std::vector<int>& nums, int k){

}