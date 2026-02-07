#include <iostream>

void bubble_sort(int arr[], int size);

int main (int argc, char *argv[]) {

  int size;
  std::cout << "Enter the size of your list: ";
  std::cin >> size;

  int arr[size];

  //list input
  std::cout << "Enter your list (use space between every digit): ";
  for (int i = 0; i < size; i++){
    std::cin >> arr[i];
  }

  bubble_sort(arr, size);

  //printing the sorted array
  std::cout << "Your sorted list: ";
  for (int i = 0; i < size; i++) {
    if (i < size-1) {
      std::cout << arr[i] << ", ";
    }
    else{
      std::cout << arr[i];
    }
  }
  std::cout << '\n';

  return 0;
}

//main algorithm. Forget anything else.
void bubble_sort(int arr[], int size){

  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] =  temp;
      }
    }
  }
}
