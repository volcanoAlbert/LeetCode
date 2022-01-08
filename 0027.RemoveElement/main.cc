#include <iostream>
#include "solution.h"

int main(){
    int a[] = {3, 2, 2, 3}, val = 2;
    vector<int> nums(a, a+4);
    Solution s;
    
    int len = s.removeElement(nums, val);
    for(int i = 0; i < len; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}