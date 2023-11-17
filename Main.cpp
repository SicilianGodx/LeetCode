#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {3,2,3};

    int sol = LeetCode.majorityElements(nums);

    // for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
    //     std::cout << *itr << " ";
    // }

    std::cout << "\noutput: " << sol << std::endl;

    return 0;
}