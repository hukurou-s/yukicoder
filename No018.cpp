#include <iostream>
#include <string>

using namespace std;

int main(){

  string s;

  cin >> s;

  for ( int k = 0; k < s.size(); k++ ) {
    s[k] = s[k] - ( k % 26 + 1 );
    if ( s[k] < 'A' ) { s[k] += 26; }
  }

  cout << s << endl;

  return 0;
}
