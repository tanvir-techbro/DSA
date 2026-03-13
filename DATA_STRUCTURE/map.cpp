#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

  // Creating an empty map
  //  key   value
  map<int, string> m0;
  map<int, string> m1 = {
      {3, "Macbook"},
      {1, "Thnkpad"},
      {2, "IdeaPad"}};

  // Displaying m1
  for (auto &tmp : m1) {
    cout << tmp.first << '\t' << tmp.second << endl;
  }

  // Inserting a key value pair to m0
  m0.insert({1, "Biriani"});
  for (auto &tmp : m0) {
    cout << tmp.first << '\t' << tmp.second << endl;
  }

  // Accssing elements of m1
  cout << m1[3] << endl;
  cout << m1.at(2) << endl;

  // Updating values of m1
  m1[0] = "XPS";
  m1.at(3) = "EliteBook";
  cout << m1[0] << endl;
  cout << m1.at(3) << endl;

  // Finding an element
  auto it = m1.find(0);
  if (it != m1.end()) {
    cout << it->first << '\t' << it->second << endl;
  } else {
    cout << "Value with key 0 not found" << endl;
  }

  // Deleting an element
  m1.erase(1);
  for (auto &tmp : m1) {
    cout << tmp.first << '\t' << tmp.second << endl;
  }

  return 0;
}
