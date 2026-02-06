#include <iostream>
#include <string>
#include <limits>

using namespace std;

int search(string list[], int size, string element);

int main (int argc, char *argv[]) {
  
  int size, index;
  cout << "Enter the number of element in your list : ";
  cin >> size;
  string element;
  string list[size];

  cin.ignore(numeric_limits<streamsize>::max(), '\n'); //remove white space

  //list input
  for (int i = 0; i < size; i++) {
    cout << "Enter your element " << i+1 << " : ";
    getline(cin, list[i]);
  }

  cout << "Enter the element you would like to find in the list : ";
  cin >> element;

  index = search(list, size, element);
  if (index == -1){
    cout << "Your element not found in the list." << std::endl;
  }
  else{
    cout << "Your element \"\ " << element << " \"\ is on the index " << index + 1 << "." << std::endl;
  }

  return 0;
}

//search algorithm
int search(string list[], int size, string element){

  for(int index = 0; index < size; index++){
    if (list[index] == element) {
      return index;
      break;
    }
  }
  
  return -1; //if not found

}
