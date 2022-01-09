#include <iostream>
#include "solution.h"

Solution s;

int main(){
    int a[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    vector<int> nums(a, a+10);
    if(s.containsDuplicate(nums)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}