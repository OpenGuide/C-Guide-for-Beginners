#include <assert.h>


/* recursive fibonacci */
int fib_rec(int n) {
  assert(n >= 0);
  if (n <= 1)
    return 1;
  return fib_rec(n - 1) + fib_rec(n - 2);
}

/* iterative fibonacci */
int fib_iter(int n) {
  assert(n >= 0);
  int a = 0, b = 1;
  int t;
  while (n--) {
    t = a + b;
    a = b, b = t;
  }
  return b;
}
