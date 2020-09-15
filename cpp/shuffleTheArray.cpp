// Jerico Suguitan
// 9/14/2020
// link: https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        
        int i = 0 ;
        
        while (i < n) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
            i++;
        }
        
        return ans;
    }
};