class Solution {
 public:
  int mySqrt(int x) {
    unsigned a = 1;
    unsigned b = x + 1u;

    while (a < b) {
      const unsigned m = (a + b) / 2;
      if (m > x / m)
        b = m;
      else
        a = m + 1;
    }
    return a - 1;
  }
};
