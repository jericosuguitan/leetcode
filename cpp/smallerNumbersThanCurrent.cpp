// Jerico Suguitan
// 12/21/2021
// link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// runtime: 44ms

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int smaller = 0;
        vector<int> ans(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) {
                    continue;
                }
                
                if (nums[j] < nums[i]) {
                    smaller += 1;
                }
            }
            
            ans[i] = smaller;
            smaller = 0;
        }
        
        return ans;
    }
};