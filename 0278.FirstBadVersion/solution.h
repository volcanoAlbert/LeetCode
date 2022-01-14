class Solution{
public:
    int firstBadVersion(int n) {
        int left = 0, right = n, middle = 0;
        while(left < right - 1){
            middle = left + (right - left)/2;
            if(isBadVersion(middle)){
                right = middle;
            }else{
                left = middle;
            }
        }
        return right;
    }
};