class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> ans;
            long long a = 1;
            for (int c= 0; c<= rowIndex; c++) {
                ans.push_back(a);
                a = a*(rowIndex-c)/(c+1);
            }
        return ans;  
    }
};