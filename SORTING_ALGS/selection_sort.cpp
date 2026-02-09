#include <iostream>

void selection_sort(int arr[], int size);

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

  selection_sort(arr, size);

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

//actual algorithm. selection sort.
void selection_sort(int arr[], int size){
  for (int i = 0; i < size - 1; i++){
    int min = i;
    for (int j = i + 1; j < size; j++){
      if (arr[min] > arr[j]) {
        min = j;
      }
    }
    //swapping
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
