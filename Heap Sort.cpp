#include <iostream>
  using namespace std;

  void heapify(int arr[], int n, int i) {
    int max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[max])
      max = left;

    if (right < n && arr[right] > arr[max])
      max = right;

    if (max != i) {
      swap(arr[i], arr[max]);
      heapify(arr, n, max);
    }
  }

  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);

      heapify(arr, i, 0);
    }
  }

  void display(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }

  int main() {
    int arr[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array:\n";
    display(arr, n);
    heapSort(arr, n);
    cout<<endl;

    cout << "Sorted array:\n";
    display(arr, n);
  }
