class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string s="";
        while(n>0){
            if(n%2==0)
            s+="0";
            else{
                s+="1";
            }
            n=n/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};