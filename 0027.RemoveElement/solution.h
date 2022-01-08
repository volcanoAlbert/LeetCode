#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)    return 0;
        int size = nums.size(), j = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] == val){
                j = i;
                while(j < size-1){
                    nums[j] = nums[j+1];
                    j++;
                }
                // nums[--size] = -1;
            }
        }
        return size;

        // if(nums.size() == 0)    return 0;
        // int size = nums.size(), end = nums.size() - 1, temp;
        // for(int i = 0; i < nums.size(); i++){
        //     if(i > end)    break;

        //     if(nums[i] == val){
        //         while(nums[end] != val){
        //             end--;
        //         }
        //         // swap two elements
        //         temp = nums[i];
        //         nums[i] = nums[end];
        //         nums[end] = temp;
        //     }
        // }
        // return end;
    }
};