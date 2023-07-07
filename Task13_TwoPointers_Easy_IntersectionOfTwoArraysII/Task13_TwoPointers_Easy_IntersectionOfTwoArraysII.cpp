#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    static std::vector<int> intersect(std::vector<int>& a, std::vector<int>& b) {
        int i = 0, j = 0, n = a.size(), m = b.size();
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        std::vector<int> result = {};
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                result.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] > b[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        return result;
    }
};

int main()
{
    std::vector<int> nums1 = { 1,2,2,1 }, nums2 = { 2,2 };
    for (int i : Solution::intersect(nums1, nums2)) {
        std::cout << i << " ";
    }
}
