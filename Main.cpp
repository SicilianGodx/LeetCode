#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums = {7,1,5,3,6,4};

    int sol = LeetCode.maxProfit(nums);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\nProfit: ";

    std::cout << sol << std::endl;


    return 0;
}