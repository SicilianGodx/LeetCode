#include "LeetCode.h"

//O(n), O(n); space complexity can be reduced to O(1) without the use of temp vector.
//To do this, use three pointers and begin filling nums1 with the largest values in
//nums1 and nums2 from the end to the front.

//88. Merge Sorted Array - easy
void LeetCode::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    std::vector<int> ans;
    std::vector<int>::iterator itr1 = nums1.begin();
    std::vector<int>::iterator itr2 = nums2.begin();
    int track1 = 0;
    int track2 = 0;

    for (int i = 0; ((track1 < m) && (track2 < n)); i++){
        if (*itr1 < *itr2){
            ans.push_back(*itr1);
            itr1++;
            track1++;
        }
        else{
            ans.push_back(*itr2);
            itr2++;
            track2++;
        }
    }

    if (track1 == m){
        for (int j = track2; j < (n-1); j++){
            ans.push_back(*itr2);
            itr2++;
        }
        ans.push_back(*itr2);
    }

    else{
        for (int j = track1; j < (m-1); j++){
            ans.push_back(*itr1);
            itr1++;
        }
        ans.push_back(*itr1);
    }
    nums1 = ans;
}