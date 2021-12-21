#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    nums.reserve(100);
    for (auto i = 0U; i < 100; ++i) {
        nums.emplace_back(i);
    }

    int find_num = 33;
    int l = 0;
    int r = 99;
    while (l <= r){
        int mid = (l + r) >> 1;
        std::cout << mid << std::endl;
        if (nums[mid] == find_num) {
            l = mid;
            break;
        }
        if (nums[mid] < find_num) {
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }

    std::cout << "find num: " << nums[l] << std::endl;
    


}