#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    int result = 0;

    for (int num : nums) {
        result ^= num;  // Using XOR to find the single number
    }

    return result;
}

int main() {
    std::vector<int> nums = {4, 2, 4, 2, 5, 6, 6};  // Example array

    int single = singleNumber(nums);

    std::cout << "Single Number: " << single << std::endl;

    return 0;
}
