#include <iostream>
#include <vector>

using namespace std;

long long unsigned int sugoroku(int n);

int main() {
  int n;
  long long unsigned int answer;
  cin >> n;

  answer = sugoroku(n);

  cout << answer << endl;
}

long long unsigned int sugoroku(int n) {
  vector<long long unsigned int> array;
  array.push_back(1);
  array.push_back(2);
  for ( int i = 2; i < n; i++ ) {
    array.push_back( array[i-1] + array[i-2] );
  }

  return array[n-1];
}
