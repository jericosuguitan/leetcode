// Jerico Suguitan
// 9/10/2020
// link: https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {

        
        vector<int> answer;
        
        int left = 0;
        int size = A.size();
        int right = size - 1;
        int temp; 

        
        while (left <= right) {
            // left is smaller than right
            
            if (abs(A[left]) < abs(A[right])) {
                temp = A[right] * A[right];
                answer.push_back(temp);
                right--;
            }
            else {
                temp = A[left] * A[left];
                answer.push_back(temp);
                left++;
            }
        }
            
        // reverse(answer.begin(), answer.end());
        
        for (int i = 0; i < size/2; i++) {
            //cout << "loop" << i+1 <<  endl;
            
            temp = answer[i];
            //cout << "temp = " << temp << endl;
            
            answer[i] = answer[(size-1)-i];
            //cout << "left = " << answer[i] << endl;
            
            answer[(size-1)-i] = temp;
            //cout << "right = " << answer[(size-1)-i] << endl;
        }
        
        return answer;
    }
    
//         run time: O(n^2) does; doesn't pass run time submission
    
//         vector<int> squaredVector;
//         vector<int> sortedVector;
        

//         // sort afterwards
        
//         int temp;
        
//         // square all indices first
//         for (int i = 0; i < A.size(); i++) {
//             temp = A[i] * A[i];
//             squaredVector.push_back(temp);
//         }
        
//         // sorting
//         for (int i = 0; i < A.size(); i++) {
//             for (int j = i + 1; j < A.size(); j++) {
//                 if (squaredVector[i] > squaredVector[j]){
//                     swap(squaredVector[i], squaredVector[j]);
//                 }
//             }
//         }
    
//         return squaredVector;
    
};