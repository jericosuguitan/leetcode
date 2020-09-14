// Jerico Suguitan
// 9/13/2020
// link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // runtimes: 32ms, 40ms, 44ms, 24ms
        int i = 0; 
        
        for (i = 0; i < arr.size(); i++) {
            if (arr[i] > arr[i+1]) {
                break;
            }
        }
        return i;
        
        
        /*
        // runtimes: 20ms
        int i = 0;
        
        while (arr[i] < arr[i+1]) {
            i++;
        }
        
        return i;
        */
    }
};