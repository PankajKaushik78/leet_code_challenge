class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        int a = 0;
        int b = 0;
        while(a < A.size() && b < B.size()){
            int x = max(A[a][0], B[b][0]);
            int y = min(A[a][1], B[b][1]);
            if(x <= y){
                ans.push_back({x,y});
            }
            if(A[a][1] > B[b][1]){
                b++;
            }else if(A[a][1] < B[b][1]){
                a++;
            }else{
                a++;
                b++;
            }
        }
        return ans;
    }
};