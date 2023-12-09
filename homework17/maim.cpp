#include <vector>
#include <iostream>

using namespace std;

vector<int> findSum(const vector<int>& nums, int target) {
    vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = nums.size()-1; j > 0; --j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                result.push_back(i);
                result.push_back(j);
            }
            else if (sum != target && i == nums.size()-1) {
                result.push_back(-1);
                return result;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = { 2, 7, 11, 15 };
    vector<int> result = findSum(nums1, 20);
    for (auto& i : result)
    {
        cout << i<< " ";
    }

    return 0;
}