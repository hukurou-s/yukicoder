#include <iostream>

using namespace std;

int main() {
  int n, k;
  int max = 0;
  int min = 0xFFFFFF;
  int tmp;

  cin >> n >> k;

  for ( int i; i < n; i++ ) {
    cin >> tmp;
    if ( max < tmp ) {
      max = tmp;
    }
    if ( tmp < min ) {
      min = tmp;
    }
  }

  cout << max - min << endl;

  return 0;
}
