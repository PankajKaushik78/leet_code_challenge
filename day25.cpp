class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int a = A.size();
        int b = B.size();
        
        vector<vector<int>> dp(a+1, vector<int>(b+1));
        
        for(int i=0; i<=a; i++){
            for(int j=0; j<=b; j++){
                if(i == 0 || j == 0 ){
                    dp[i][j] = 0;
                }else if(A[i-1] == B[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[a][b];
    }
};