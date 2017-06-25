#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  int a, b, c, d;
  string s;
  int i;
  int array[10] = {0};
  int max = -1;
  int index = 0;

  cin >> n;

  for ( i = 0; i < n; i++ ) {
    cin >> a >> b >> c >> d >> s;
    if ( s == "YES" ) {
      array[a] += 1;
      array[b] += 1;
      array[c] += 1;
      array[d] += 1;
    } else {
      array[a] -= 10;
      array[b] -= 10;
      array[c] -= 10;
      array[d] -= 10;
    }
  }

  for ( i = 0; i < 10; i++ ) {
    if ( max < array[i] ) {
      max = array[i];
      index = i;
    }
  }

  cout << index << endl;

  return 0;
}
