#include <bits/stdc++.h>
#include "../IO/LeetcodeIO.h"

using namespace std;

class Solution {
public:
    int getDepth(TreeNode* root, bool& flag)
    {
        if(root == nullptr) return 0;
        int leftDepth = getDepth(root->left, flag);
        int rightDepth = getDepth(root->right, flag);
        if(abs(leftDepth - rightDepth) > 1) flag = false;
        return 1 + max(leftDepth, rightDepth);
    }

    bool isBalanced(TreeNode* root) {
        bool flag = true;
        int depth = getDepth(root, flag);
        return flag;
    }
};

int main(){
    REGISTER_CONSTRUCTOR_SOLUTION;
    REGISTER_MEMBERFUNCTION_SOLUTION(isBalanced);
    while(true){
        executor.constructSolution();
        executor.executeSolution();
    }
}