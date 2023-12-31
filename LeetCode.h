#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>

class LeetCode
{
public:
    LeetCode();

    //Array/String problems:

    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

    int removeElement(std::vector<int>& nums, int val);

    int removeDuplicates(std::vector<int>& nums);

    int removeDuplicatesII(std::vector<int>& nums);

    int majorityElement(std::vector<int>& nums);

    void rotate(std::vector<int>& nums, int k);

    int maxProfit(std::vector<int>& prices);

    int maxProfitII(std::vector<int>& prices);

    bool canJump(std::vector<int>& nums);

private:

};