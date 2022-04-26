#include<iostream>
using namespace std;

void PrintArray(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << "[" << array[i] << "]";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//mengambil value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //memindah ke tempat yang benar
   }
}
int main() {
   int n;
   cout << "Masukkan jumlah array : ";
   cin >> n;
   int arr[n];    //membuat array dengan elemen dari user
   cout << "Masukkan isi array :" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   insertionSort(arr, n);
   cout << "Hasil Array yang sudah di Sorting adalah: " << endl;
   PrintArray(arr, n);
}

