#include <iostream>
#include "solution.h"

Solution s;

int main(){
    int a[] = {-1, 0, 3, 5, 9, 12};
    vector<int> nums(a, a+6);
    printf("%d", s.search(nums, 2));
    return 0;
}