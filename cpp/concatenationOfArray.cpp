// Jerico Suguitan
// 12/21/2021
// link: https://leetcode.com/problems/concatenation-of-array/
// runtime: 12ms

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int fullSize = 2*n;
        
        vector<int> ans(fullSize, 0);
        
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
        }
        
        for (int i = n; i < fullSize; i++) {
            ans[i] = nums[i-n];
        }
        
        return ans;
    }
};