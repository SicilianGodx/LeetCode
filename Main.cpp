#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {3,2,3,5,-100,-100,-50,5,5};

    int sol = LeetCode.majorityElement(nums);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\n";

    std::cout << sol << std::endl;


    return 0;
}