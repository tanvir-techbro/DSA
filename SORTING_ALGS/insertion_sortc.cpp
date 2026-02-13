#include <iostream>

void insertion_sort(double arr[], int size);

int main (int argc, char *argv[]) {

  double *pArr = NULL;
  int size;
  std::cout << "Enter the size of your list: ";
  std::cin >> size;

  pArr = new double[size];

  //list input
  std::cout << "Enter your list (use space between every digit): ";
  for (int i = 0; i < size; i++){
    std::cin >> pArr[i];
  }

  insertion_sort(pArr, size);

  //printing the sorted array
  std::cout << "Your sorted list: ";
  for (int i = 0; i < size; i++) {
    if (i < size-1) {
      std::cout << pArr[i] << ", ";
    }
    else{
      std::cout << pArr[i];
    }
  }
  std::cout << '\n';

  delete[] pArr;
  return 0;
}

//main algorithm. Forget anything else.
void insertion_sort(double arr[], int size){

  for(int i = 1; i < size; i++){
    double key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
