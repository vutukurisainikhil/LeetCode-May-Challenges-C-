class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool res;
        if(ransomNote.length()==0 && magazine.length()==0){
            return true;
        }
        map<char,int> m ;
        map<char,int> r ;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]] = m[magazine[i]]+1;
        }
        
        for(int i=0;i<ransomNote.length();i++){
            r[ransomNote[i]] = r[ransomNote[i]]+1;
        }
        
        for(int i=0;i< ransomNote.length();i++){
            if(m.find(ransomNote[i])!=m.end() && r[ransomNote[i]] <= m[ransomNote[i]]){
                res = true;
            }
            else{
                return false;
            }
        }
        
        
     return res;
    }                                                                     
};