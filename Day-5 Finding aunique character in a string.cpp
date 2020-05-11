class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> v;
        vector<char>::iterator it;
        for(int i=0;i<s.length();i++){
            it = find(v.begin(),v.end(),s[i]);
            if(s.find(s[i],i+1)>s.length() && it==v.end()){
                return i;
            }
            v.push_back(s[i]);
        }
        return -1;
    }
};