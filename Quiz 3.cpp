#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numSet;

    for (int num : nums) {
        if (numSet.count(num) > 0) {
            return true;  // Found a duplicate
        }
        numSet.insert(num);
    }

    return false;  // No duplicates found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 1};  // Example array

    if (containsDuplicate(nums)) {
        std::cout << "Array contains duplicates." << std::endl;
    } else {
        std::cout << "Array does not contain duplicates." << std::endl;
    }

    return 0;
}
