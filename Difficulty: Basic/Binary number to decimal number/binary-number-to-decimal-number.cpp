class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int res=0;
        int p=1;
        for(int i=b.length()-1;i>=0;i--){
            if(b[i]=='1')
            res+=p;
            p*=2;
        }
        return res;
    }
};