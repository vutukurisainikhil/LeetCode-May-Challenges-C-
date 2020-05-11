class Solution {
public:
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    
    int majorityElement(vector<int>& nums) {
        int ans = 0, count = 0;
        for(auto& num : nums){
            if(count == 0){
                ans = num; count = 1;
            }else{
                count += (ans == num) ? 1 : -1;
            }
        }
        return ans;
        // map<int,int> m;
        // int count =0,val;
        // for(int i=0;i<v.size();i++){
        //     m[v[i]]++;
        //     if(m[v[i]]>count){
        //         count = m[v[i]];
        //         val = v[i];
        //     }
        // }
        // return val;
        
    }
};