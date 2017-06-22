#include <iostream>

using namespace std;

void sort(int arr[], int n);
void swap(int arr[], int i, int j);

int main() {

  int l, n, k, count, total_width;
  count = total_width = 0;
  cin >> l >> n;

  int block_width[n];

  for ( k = 0; k < n; k++ ) {
    cin >> block_width[k];
  }

  sort(block_width, n);

  for ( k = 0; k < n; k++  ) {
    total_width += block_width[k];
    if ( total_width > l ) {
      break;
    }
  }

  cout << k << endl;

  return 0;

}

void sort(int arr[], int n) {

  int k = 1;

  while ( k < n ) {

    if ( arr[k-1] <= arr[k] ) {
      k++;

    } else {

      swap(arr, k-1, k);
      k--;

      if ( k == 0 ) { k++; }

    }
  }

}

void swap(int arr[], int i, int j) {

  int t;

  t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;

}
