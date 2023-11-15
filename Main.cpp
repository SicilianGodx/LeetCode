#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> nums{0,1,2,2,3,0,4,2};
    int val = 2;

    int k = LeetCode.removeElement(nums, val);

    for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){
        std::cout << *itr << " ";
    }
    std::cout << "\nk: " << k << std::endl;


    return 0;
}