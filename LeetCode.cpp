#include "LeetCode.h"

LeetCode::LeetCode(){}


//88. Merge Sorted Array - easy
void LeetCode::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    std::vector<int> ans;
    std::reverse(nums1.begin(), nums1.end());
    std::reverse(nums2.begin(), nums2.end());
    for(int i = 0; i < m + n; i++){
        if (nums2.empty() == true){
            ans.push_back(nums1.back());
            nums1.pop_back();
            continue;
        }
        if (nums1.back() == 0){
            ans.push_back(nums2.back());
            nums2.pop_back();
            continue;
        }
        if (nums1.back() < nums2.back()){
            ans.push_back(nums1.back());
            nums1.pop_back();
        }
        else{
            ans.push_back(nums2.back());
            nums2.pop_back();
        }
    }
    nums1 = ans;
}
