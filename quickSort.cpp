#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int indexAwal, int indexAkhir) {
  int pivotIndex = array[indexAkhir];
  int storeIndex = (indexAwal - 1);

  for (int i = indexAwal; i < indexAkhir; i++) {
    if (array[i] <= pivotIndex) {
      storeIndex++;
      swap(&array[i], &array[storeIndex]);
    }
  }
  swap(&array[pivotIndex], &array[storeIndex + 1]);

  return (storeIndex + 1);
}

void quickSort(int array[], int indexAwal, int indexAkhir) {
  if (indexAwal < indexAkhir) {
    int pivotIndex = partition(array, indexAwal, indexAkhir);
    quickSort(array, indexAwal, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, indexAkhir);
  }
}

int main() {
  int array[] = {2, 1, 4, 3, 6, 5, 8, 7};
  int n = sizeof(array) / sizeof(array[0]);
  
  quickSort(array, 0, n - 1);
  
  printArray(array, n);
}