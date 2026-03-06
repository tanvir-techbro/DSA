#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void reverse_string(void);
void valid_parenthesis(void);

int main(int argc, char *argv[]) {

  // STACK = A stack is a LIFO data structure. Last-In-First-Out.
  //         Stores object in sort of vertical tower.

  // ALL STACKS BELOW ARE EMPTY.
  stack<int> digit;            // stack of intagers.
  stack<float> numbers;        // stack of floating point intagers.
  stack<double> floatint;      // stack of intager and floating point intagers.
  stack<char> letter;          // stack of characters.
  stack<string> word;          // stack of strings.
  stack<pair<int, int>> cords; // stack to store 2d coodinates.
  stack<vector<int>> arr;      // stack of vector intager arrays.
  // Thre are more types of stacks, these are some examples above.

  /* ~STACK OPERATIONS~
   * push   =   adds a element to the top of the stack.        O(1)
   * pop    =   removes and returns the top element.           O(1)
   * top    =   reads the top element.                         O(1)
   * empty  =   checks if the stack is empty or not.           O(1)
   * size   =   returns number of element currently in stack.  O(1)
   */

  cout << "Enter a string to be reversed (Do not enter spaces): ";
  reverse_string();
  cout << "Enter Parenthesis to see if that is balanced or not: ";
  valid_parenthesis();

  return 0;
}

// Reversing a string using stacks.
void reverse_string(void) {
  string str;
  stack<char> reversed_string;
  getline(cin, str);

  for (char ch : str) {
    reversed_string.push(ch);
  }

  cout << "Original : " << str << '\n';
  cout << "Reversed : ";
  while (!reversed_string.empty()) {
    cout << reversed_string.top();
    reversed_string.pop();
  }
  cout << '\n';
}

// Checking is set of parenthesis is balanced or not.
void valid_parenthesis(void) {
  bool valid = false;
  string str;
  stack<char> bracket;
  cin >> str;

  for (char c : str) {
    if ((c == '(') || (c == '{') || (c == '[')) {
      bracket.push(c);
    } else if ((c == ')') && bracket.top() == '(') {
      bracket.pop();
    } else if ((c == '}') && bracket.top() == '{') {
      bracket.pop();
    } else if ((c == ']') && bracket.top() == '[') {
      bracket.pop();
    }
  }

  if (bracket.empty()) {
    cout << "The parenthesis is balanced.\n";
  } else {
    cout << "The parenthesis is not balanced.\n";
  }
}
