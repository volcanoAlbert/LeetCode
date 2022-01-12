#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1, middle = 0;
        while(left <= right){
            middle = (left + right)/2;
            if(target < nums[middle]){
                right = middle - 1;
            }else if(target > nums[middle]){
                left = middle + 1;
            }else if(target == nums[middle]){
                return middle;
            }
        }
        return -1;
    }
};