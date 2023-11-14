#include "LeetCode.cpp"

int main(){
    
    LeetCode LeetCode;

    std::vector<int> vec1{2,0};
    std::vector<int> vec2{1};
    int nums1 = 2;
    int nums2 = 1;

    LeetCode.merge(vec1, nums1, vec2, nums2);

    std::reverse(vec1.begin(), vec1.end());

    for (int i = 0; i < nums1 + nums2; i++){
        std::cout << vec1.back() << " ";
        vec1.pop_back();
    }
    std::cout << "\n";


    return 0;
}