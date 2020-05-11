class Solution {
public:
    int findComplement(int num) {
        string b="";
       while(num>0){
           if(num%2==0){
               b="1"+b;
           }
           else{
               b="0"+b;
           }
           num=num/2;
       }
       unsigned long int x= bitset<32>(b).to_ulong(); 
        return x;
    }
};