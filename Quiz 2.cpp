#include <iostream>
#include <vector>

void rotateArray(std::vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;  // To handle cases where k is greater than the array size

    std::reverse(nums.begin(), nums.end());  // Reverse the entire array
    std::reverse(nums.begin(), nums.begin() + k);  // Reverse the first k elements
    std::reverse(nums.begin() + k, nums.end());  // Reverse the remaining elements
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    rotateArray(nums, k);

    std::cout << "Rotated Array: ";
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}
