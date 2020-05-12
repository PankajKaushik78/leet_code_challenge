class Solution {
public:
    // bool vis[][];
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int cc = image[sr][sc];
        image[sr][sc] = newColor;
        if(sr-1>=0 && image[sr-1][sc] == cc && image[sr-1][sc] != newColor){
            vector<vector<int>> recAns = floodFill(image, sr-1,sc, newColor);
        }
        if(sc-1>=0 && image[sr][sc-1] == cc && image[sr][sc-1] != newColor){
            vector<vector<int>> recAns = floodFill(image, sr,sc-1, newColor);
        }
        if(sr+1<image.size() && image[sr+1][sc] == cc && image[sr+1][sc] != newColor){
            vector<vector<int>> recAns = floodFill(image, sr+1,sc, newColor);
        }
        if(sc+1<image[0].size() && image[sr][sc+1] == cc && image[sr][sc+1] != newColor){
            vector<vector<int>> recAns = floodFill(image, sr,sc+1, newColor);
        }
        return image;
        
    }
};