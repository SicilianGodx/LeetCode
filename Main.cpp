#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {3,2,3};
    int k = 0;

    LeetCode.rotate(nums, k);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }

    return 0;
}