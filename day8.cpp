class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        bool strt = true;
        double x = coordinates[1][0] - coordinates[0][0];
        double y = coordinates[1][1] - coordinates[0][1];
        double slope = y/x;
        for(int i=1; i<coordinates.size()-1; i++){
            double x1 = coordinates[i+1][0] - coordinates[i][0];
            double y1 = coordinates[i+1][1] - coordinates[i][1];
            double slope1 = y1/x1;
            if(slope != slope1){
                strt = false;
                break;
            }
        }
        return strt;
    }
};
