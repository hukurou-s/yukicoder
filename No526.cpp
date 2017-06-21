#include <iostream>

using namespace std;

int fib(int n, unsigned int m);

int main() {
  int n;
  unsigned int m;
  int f;

  cin >> n >> m;

  f = fib(n, m);

  cout << f << endl;

  return 0;
}

int fib(int n, unsigned int m) {
  int a = 0;
  int b = 1;
  int t;
  int k;

  for ( k = 1; k < n; k++ ) {
    t = a + b;
    a = b; b = t;
    b %= m;
  }

  return a;
}
