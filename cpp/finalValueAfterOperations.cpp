// Jerico Suguitan
// 12/21/2021
// link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
// runtime: 4ms

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for (int i = 0; i < operations.size(); i++){
            int add = operations[i].find("+");
            if (add != -1) {
                x += 1;
            }
            else {
                x -= 1;
            }
        }
        
        return x;
    }
};