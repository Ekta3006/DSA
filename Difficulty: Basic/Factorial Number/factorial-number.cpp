class Solution {
  public:
    int isFactorial(int n) {
        for (int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }

  if (n == 1) {
    return 1;
  }
  else 
    return 0;
  }
};