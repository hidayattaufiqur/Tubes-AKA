#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " " ;
  }
  cout << endl;
}

int main() {
  int array[] = {2, 1, 4, 3, 6, 5, 8, 7};
  int n = sizeof(array) / sizeof(array[0]);
  
  bubbleSort(array, n);
  
  printArray(array, n);
}