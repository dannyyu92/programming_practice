#include <iostream>
using namespace std;

void binarySearch(int array[], int value, int low, int high);

int main() {
  int evenArray[] = {1,2,3,4,5,6};
  int oddArray[] = {1,2,3,4,5,6,7};

  binarySearch(evenArray, 1, 0, 5);
  binarySearch(oddArray, 1, 0, 6);

  binarySearch(evenArray, 6, 0, 5);
  binarySearch(oddArray, 7, 0, 6);

  binarySearch(evenArray, 3, 0, 5);
  binarySearch(oddArray, 3, 0, 6);

  binarySearch(evenArray, 100, 0, 5);
  binarySearch(oddArray, 100, 0, 6);

  binarySearch(evenArray, -1, 0, 5);
  binarySearch(oddArray, -1, 0, 6);
}

void binarySearch(int array[], int value, int low, int high) {
  if (low > high) cout << "No such element in array" << endl;
  else {
    int mid = (low+high)/2;
    if (value == array[mid]) {
      cout << "Element " << value << " found at index " << mid << endl;
    }
    else if (value > array[mid]) {
      low = mid+1;
      binarySearch(array, value, low, high);
    }
    // if value < array[mid]
    else {
      high = mid-1;
      binarySearch(array, value, low, high);
    }
  }
}
