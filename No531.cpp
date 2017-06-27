#include <iostream>

using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  if ( n % 2 == 0 ) {

    if ( m >= n) {
      cout << "1" << endl;
    } else if ( m >= (n/2) ) {
      cout << "2" << endl;
    } else {
      cout << "-1" << endl;
    }

  } else {

    if ( n <= m ) {
      cout << "1" << endl;
    } else {
      cout << "-1" << endl;
    }

  }

  return 0;

}
