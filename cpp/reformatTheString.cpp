// Jerico Suguitan
// 1/14/2021
// link: https://leetcode.com/problems/reformat-the-string/
// runtime: 56ms

class Solution {
public:
    string reformat(string s) {
        string a = "", b = "", ans = "";
        
        for (int i = 0; i <= s.length(); i++) {
            if (isalpha(s[i])) {
                a += s[i];
            }
            else if (isdigit(s[i])) {
                b += s[i];
            }
        }
        
        if (a.size() < b.size()){
            string temp = a;
            a = b;
            b = temp;
        }
        
        if ((a.size() - b.size()) > 1) {
            return "";
        }

        for (int i = 0; i < a.size(); i++) {
            cout << "i = " << i << " and a[i] = " << a[i] << "." << endl;
            ans.push_back(a[i]);
            if (i >= b.size()) {
                cout << "b.size is done";
                break;
            }
            cout << "i = " << i << " and b[i] = " << b[i] << "." << endl;
            ans.push_back(b[i]);
            
        }
        
        return ans;
    }
};