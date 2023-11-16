#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums{0,0,1,1,1,1,2,3,3};

    int sol = LeetCode.removeDuplicatesII(nums);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\noutput : " << sol << std::endl;


    return 0;
}