#include <vector>
#include <algorithm>>

using namespace std;

const int maxn = 10010;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(), nums.end());
        for(vector<int>::iterator it = nums.begin(); it != nums.end() - 1; ++it){
            if(*it == *(it+1)){
                flag = true;
                break;
            }
        }
        return flag;
    }
};