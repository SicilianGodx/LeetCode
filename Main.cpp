#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {-1,-100,3,99};
    int k = 2;

    LeetCode.rotate(nums, k);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }

    return 0;
}