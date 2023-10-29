#include <iostream>
#include <string>
using namespace std;
int main() {
  string myGreeting = "Namaste";
  string names = "Aaradhya";
  string newString;
  newString = myGreeting + " " + names;
  cout << newString << endl;

  newString = myGreeting.append(names);
  cout << newString << endl;

  cout << "Length of myGreeting string : " << myGreeting.length() << endl;
  cout << myGreeting[4] << endl;

  myGreeting[5] = 'p';
  cout << myGreeting << endl;

  string fullName;
  cout << "Enter full name : ";
  getline(cin, fullName);
  cout << "Name = " << fullName;
  
  return 0;
}
