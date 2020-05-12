class Solution {
public:
    void floodfill(vector<vector<int>>& image, int x, int y,int oldcolor, int newcolor){
        int n = image.size();
        int m = image[0].size();
        if( x<0 || x>n-1 || y<0 || y>m-1){
            return;
        }
        if(image[x][y] != oldcolor){
            return;
        }
        if(image[x][y] == newcolor){
            return;
        }
        image[x][y] = newcolor;
        floodfill(image, x+1,y, oldcolor,newcolor);
        floodfill(image, x-1,y, oldcolor,newcolor);
        floodfill(image, x,y+1, oldcolor,newcolor);
        floodfill(image, x,y-1, oldcolor,newcolor);
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int oldcolor = image[sr][sc];
        floodfill(image, sr, sc, oldcolor, newcolor);
        return image;
    }
};