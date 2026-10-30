class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        for (int r=1; r<= numRows; r++) {
            vector<int> temp;
            long long a = 1;
            for (int c= 1; c<= r; c++) {
                temp.push_back(a);
                a = a*(r-c)/c;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};