class Solution {
public:
    Solution() {ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);}
    bool isPerfectSquare(int n) {
        if(floor(n)!=n){
            return false;
        }
        for (long int i = 1; (i)*(i)<=n; i++) { 
            if ((n % i == 0) && (n / i == i)) { 
                return true; 
            } 
    } 
    return false; 
    }
};