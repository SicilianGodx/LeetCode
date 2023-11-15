#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums{0,0,1,1,1,2,2,3,3,4};

    int sol = LeetCode.removeDuplicates(nums);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\noutput : " << sol << std::endl;


    return 0;
}