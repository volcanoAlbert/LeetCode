#include <iostream>
#include "solution.h"

Solution s;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        cout << *it << " ";
    }
    return 0;
}