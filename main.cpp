#include <iostream>
using namespace std;


int main() {
  string name;
  int numStudents;
  cout << "How many messages (1 - 5 are allowed)?" << endl;
  cin >> numStudents;
  while (numStudents < 1 || numStudents > 5)
  {
    cout << "Invalid input, try again (enter 1 - 5) ";
    cin >> numStudents;
  }
  for (int i = 0; i < numStudents; i++)
  {
    cout << "Let me know who you are: ";
    cin >> name;
    cout << "Hello " << name << "!." << endl;
  }
  
  
  return 0;
}