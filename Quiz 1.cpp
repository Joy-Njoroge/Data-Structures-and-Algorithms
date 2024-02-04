#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int index = 1;  // Index to keep track of unique elements

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);

    std::cout << "New Length: " << newLength << std::endl;
    std::cout << "Modified Array: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }

    return 0;
}
