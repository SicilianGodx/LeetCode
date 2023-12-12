#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {2,3,1,1,4};

    bool sol = LeetCode.canJump(nums);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\n";

    std::cout << sol << std::endl;


    return 0;
}