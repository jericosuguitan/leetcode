// Jerico Suguitan
// 9/7/2020
// link: https://leetcode.com/problems/xor-operation-in-an-array/

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1; i < n; i++){
            result = result ^ (start + 2*i);
        }
        return result;
    }
};
        