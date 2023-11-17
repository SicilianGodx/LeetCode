#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class LeetCode
{
public:
    LeetCode();

    //Array/String problems:

    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

    int removeElement(std::vector<int>& nums, int val);

    int removeDuplicates(std::vector<int>& nums);

    int removeDuplicatesII(std::vector<int>& nums);

    int majorityElements(std::vector<int>& nums);

private:

};