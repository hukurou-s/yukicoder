#include <iostream>

using namespace std;

int main() {
  int n, m, p, q;

  cin >> n >> m;

  for ( int i = 0; i < m; i++ ) {
    cin >> p >> q;
    if ( n == p ) {
      n = q;
    } else if ( n == q ) {
      n = p;
    }
  }

  cout << n << endl;

  return 0;
}
