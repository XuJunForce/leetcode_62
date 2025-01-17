class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> res(m,vector<int>(n,0));
        for(int i =0;i<n;i++){
            res[0][i]=1;
        }
        for(int j=0;j<m;j++){
            res[j][0]=1;
        }
        for(int i =1;i<m;i++){
            for(int j=1;j<n;j++){
                res[i][j] = res[i-1][j]+res[i][j-1];
            }
        }
        return res[m-1][n-1];
    }
};
