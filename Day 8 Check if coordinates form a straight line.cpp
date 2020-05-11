class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) { 
        // sort(coordinates.begin(),coordinates.end());
        // for(int i=0;i<coordinates.size();i++){
        //   cout<<coordinates[i][0]<<" - "<<coordinates[i][1]<<endl;
        // }
        if(coordinates.size()==2){
            return true;
        }
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        int x_diff = x1-x0;
        int y_diff = y1-y0;
        for(int i=0;i<coordinates.size();i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if(x_diff*(y-y1)!=y_diff*(x-x1)){
                return false;
            }
        }
         return true;
    }
};