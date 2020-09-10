// Jerico Suguitan
// 9/9/2020
// link: https://leetcode.com/problems/running-sum-of-1d-array/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        // start here
        vector<int> answer; 
        int temp = 0;
        

        for(int i = 0; i < nums.size(); i++) { //sizeof() and .size() are different - sizeof() returns data type size [i.e., bytes] while .size() returns the amount of elements for a vector
            
            if (i == 0) {
                
                temp = nums[i];
                answer.push_back(temp); // .push_back is in vector library

            }
            
            else  {
                
                temp = nums[i] + answer[i-1]; // nums is the initial reference vector and answer[i-1] references the previous running sum
                answer.push_back(temp);
        
            }
        }
        
        return answer;
    }
};

