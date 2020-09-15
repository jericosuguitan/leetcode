// Jerico Suguitan
// 9/14/2020
// link: https://leetcode.com/problems/sort-array-by-parity/
// runtime: 20ms

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int total = arr1.size();
        
        for (int i = 0; i < arr1.size(); i++) {
            for (int j = 0; j < arr2.size(); j++) {
                if ( (abs(arr1[i]-arr2[j])) <= d) {
                    total--;
                    break;
                }
            }
        }
        
        return total;
    }
};