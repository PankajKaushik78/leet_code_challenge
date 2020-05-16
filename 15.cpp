class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int oma = -30000;
        int cma = 0;
        int cmi = 0;
        int omi = 30000;
        int sum = 0;
        for(int i=0; i<A.size(); i++){
            cma = max(cma + A[i], A[i]);
            oma = max(oma, cma);
            cmi = min(cmi + A[i], A[i]);
            omi = min(cmi, omi);
            sum += A[i];
        }
        if(oma <= 0) return oma;
        return max(oma, sum-omi);
    }
};