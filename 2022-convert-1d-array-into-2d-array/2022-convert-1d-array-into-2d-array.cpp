class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if((m*n) != original.size()) return ans;
        
        int x = 0;
        for(int i = 0; i < m; i++){
            vector<int> subArr;
            for(int j = 0; j < n; j++){
                subArr.push_back(original[x]);
                x++;
            }
            ans.push_back(subArr);
        }
        
        return ans;
    }
};