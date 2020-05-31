class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<double , pair<int, int>>> pq;
        for(int i=0; i<points.size(); i++){
            if(pq.size()<K){
                double a = points[i][0];
                double b = points[i][1];
                double dist = sqrt(a*a + b*b);
                pq.push({dist,{a,b}});
            }else{
                double a = points[i][0];
                double b = points[i][1];
                double dist = sqrt(a*a + b*b);
                if(pq.top().first > dist){
                    pq.pop();
                    pq.push({dist,{a,b}});
                }
            }
        }
        vector<vector<int>> ans(K);
        int i=0;
        while(pq.size()>0){
            ans[i].push_back(pq.top().second.first);
            ans[i].push_back(pq.top().second.second);
            pq.pop();
            i++;
        }
        return ans;

    }
};
