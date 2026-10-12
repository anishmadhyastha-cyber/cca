/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/
#include <iostream>
using namespace std;

class Solution {
public:
    int* runningSum(int arr[], int size) {
        for (int i = 1; i < size; i++) {
            arr[i] += arr[i - 1];
        }
        return arr;
    }
};

int main() {
    Solution solution;
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int* result = solution.runningSum(nums, size);

    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}