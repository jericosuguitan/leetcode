// Jerico Suguitan
// 9/29/2020
// link: https://leetcode.com/problems/di-string-match/
// runtime: 4ms

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int left = 0, right = S.length();
        
        for (int i = 0; i <= S.length(); i++) {
            if (S[i] == 'I') {
                res.push_back(left);
                left++;
            }
            if (S[i] == 'D') {
                res.push_back(right);
                right--;
            }
            if (i == S.length()) {
                res.push_back(left);
            }
        }
        
        return res;
    }
};