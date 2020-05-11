class Solution {
public:
    
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    
    int findJudge(int n, vector<vector<int>>& trust) {
        int arr[n+1];
        map<int,int> m;
        memset(arr,0,sizeof arr);
        for(int i=0;i<trust.size();i++){
            arr[trust[i][1]]+=1;
            m[trust[i][0]] = trust[i][1];
        }
        for(int i=1;i<=n;i++){
            if(arr[i]==n-1 && m.find(i)==m.end()){
                return i;
            }
        }
        return -1;
    }
};