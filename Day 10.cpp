class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N == 1) return N;
        int mx = -1;
        int arr[N+1];
        memset(arr,0,sizeof(arr));
        int idx = -1;
        set<int> st;
        for(int i=0; i<trust.size(); i++){
            st.insert(trust[i][0]);
            ++arr[trust[i][1]];
            if(arr[trust[i][1]] > mx){
                mx = arr[trust[i][1]];
                idx = trust[i][1];
            }        
        }
        // cout << mx;
        if(N-1 == mx && st.size() < N) return idx;
        else return -1;
    }
};