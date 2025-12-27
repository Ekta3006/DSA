class Solution {
  public:
  int gcd(int a, int b){
      if(b==0)
      return a;
      else
      return gcd(b,a%b);
  }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector <int> v;
        int l,g;
        g=gcd(a,b);
        l=(a*b)/g;
        v.push_back(l);
        v.push_back(g);
        return v;
    }
};