// Jerico Suguitan
// 9/29/2020
// link: https://leetcode.com/problems/split-a-string-in-balanced-strings/
// runtime: 0ms

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, left = 0, right = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                left++; 
            }
            if (s[i] == 'R') {
                right++;
            }
            if (left == right) {
                count++;
            }
        }
        
        return count;
    }

};