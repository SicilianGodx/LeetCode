#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums1{1,2,3,0,0,0};
    std::vector<int> nums2{};
    int m = 3;
    int n = 0;

    LeetCode.merge(nums1, m, nums2, n);

    for (std::vector<int>::iterator itr = nums1.begin(); itr != nums1.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << std::endl;


    return 0;
}