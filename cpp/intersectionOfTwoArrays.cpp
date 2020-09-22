// Jerico Suguitan
// 9/22/2020
// link: https://leetcode.com/problems/intersection-of-two-arrays/
// runtime: 12ms

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {        
        set<int> first;
        set<int> second;
        
        for (int i = 0; i < nums1.size(); i++) {
            first.insert(nums1[i]);
        }
        
        for (int j = 0; j < nums2.size(); j++) {
            if (first.count(nums2[j])) {
                second.insert(nums2[j]);
            }
        }
        
        vector<int> res(second.begin(), second.end()); 
        
        return res;
    }
};