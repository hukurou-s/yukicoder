#include <iostream>
#include <vector>

using namespace std;

long long unsigned int kenkenpa(long int n);

int main() {
  long int n;
  long long unsigned int answer = 0;

  cin >> n;

  answer = kenkenpa(n);

  cout << answer << endl;

  return 0;
}


long long unsigned int kenkenpa(long int n) {
  /*
  if ( n == 1 ) {
    return 1;
  } else if ( n == 2 ) {
    return 2;
  } else if ( n == 3 ) {
    return 2;
  }
  */
  const long long unsigned int max = 1000000007;
  vector<long long unsigned int> array;
  // array.reserve(3);
  array.push_back(1);
  array.push_back(2);
  array.push_back(2);

  for ( long int i = 3; i < n; i++ ) {
    array.push_back((array[i-2] + array[i-3]) % max);
  }

  return array[n-1];
}
