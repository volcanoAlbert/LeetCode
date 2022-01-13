#include <iostream>
#include "solution.h"

Solution s;

int main(){
    int a[] = {-7, -3, 2, 3, 11};
    vector<int> nums(a, a+5);
    vector<int> result = s.sortedSquares(nums);
    for(int i = 0; i < 5; i++){
        cout << result[i] << endl;
    }
    return 0;
}