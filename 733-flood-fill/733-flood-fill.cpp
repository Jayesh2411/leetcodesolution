class Solution {
    void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor, int temp)
    {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() )
            return;
        if( image[sr][sc] == temp )
        {
            image[sr][sc] = newColor;
            floodFill(image,sr-1,sc,newColor,temp);
            floodFill(image,sr+1,sc,newColor,temp);
            floodFill(image,sr,sc-1,newColor,temp);
            floodFill(image,sr,sc+1,newColor,temp);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {   
        if(image[sr][sc]!=newColor)
            floodFill(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};