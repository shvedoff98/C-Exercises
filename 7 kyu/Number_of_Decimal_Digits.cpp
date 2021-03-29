#include <stdint.h>

int digits(uint64_t n) {
  if (n == 0) return 1;
  int count = 0;
  while (n)
  {
      n /= 10;
      ++count;
  }
  return count;
}
