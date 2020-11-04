// Jerico Suguitan
// 11/3/2020
// link: https://leetcode.com/problems/shuffle-string/
// runtime: 28ms

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string answer = ""; 
        unordered_map <int, char> mymap;
        
        for (int i = 0; i < indices.size(); i++) {
            mymap.insert(pair <int, char> (indices[i], s[i]));
        }
        
        for (int i = 0; i < indices.size(); i++) {
            answer += mymap.find(i)->second;
        }
        
        return answer;
    }
};