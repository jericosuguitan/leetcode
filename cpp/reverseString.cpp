// Jerico Suguitan
// 11/4/2020
// link: https://leetcode.com/problems/reverse-string/
// runtime: 32ms

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            swap(s[left++], s[right--]);
        }
    }
};