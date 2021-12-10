#include "Vector.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

using namespace myStd;

/*
 * Author: Ethan Safai
 *
 * This program will create several vectors of different types, testing 
 * different operations on them and running valgrind to check for memory leaks.
 * 
 */

template<typename T>
void printVec(vector<T> vec, const char* vecName)
{
  cout << vecName << ": ";
  for (auto it = vec.begin(); it != vec.end(); ++it) 
    cout << *it << ' ';
  cout << '\n';
}

int main()
{
  // Instantiate a vector of ints
  cout << "\nCreating intVec, a vector of ints.\n";
  vector<int> intVec; 

  // Add 5 ints
  cout << "Adding 5 ints to intVec...\n";
  for (int i = 1; i <= 5; ++i) intVec.push_back(i);
  printVec(intVec, "intVec");

  // Test erasing elements at beginning, middle, and end
  cout << "Erasing the third, first, and last element...\n";
  intVec.erase(&intVec[intVec.size() / 2]);
  printVec(intVec, "intVec");
  intVec.erase(intVec.begin());
  printVec(intVec, "intVec");
  intVec.erase(intVec.end() - 1);
  printVec(intVec, "intVec");

  // Instantiate a vector of strings
  cout << "\nCreating stringVec, a vector of string objects.\n";
  vector<string> stringVec;
  stringVec.push_back("Bananas");
  stringVec.push_back("Dates");
  printVec(stringVec, "stringVec");

  // Testing inserting elements at the beginning and in the middle
  cout << "Testing insertions at the beginning and middle.\n";
  stringVec.insert(stringVec.begin(), "Apples");
  printVec(stringVec, "stringVec");
  stringVec.insert(&stringVec[2], "Carrots");
  printVec(stringVec, "stringVec");
  // Testing size and capacity methods
  cout << "stringVec size: " << stringVec.size() << '\n';
  cout << "stringVec capacity: " << stringVec.capacity() << '\n';
  cout << "Reserving space for 10 elements...\n";
  // Testing reserve method
  stringVec.reserve(10);
  cout << "stringVec size: " << stringVec.size() << '\n';
  cout << "stringVec capacity: " << stringVec.capacity() << '\n';

  // Testing alternate constructor
  cout << "\nCreating charVec1, a vector of chars with initial capacity " 
          "26...\n";
  vector<char> charVec1(26);
  for (char x = 'A'; x <= 'Z'; ++x) charVec1.push_back(x);
  printVec(charVec1, "charVec1");
  // Testing move constructor
  cout << "\nCreating charVec2 from charVec1 via move constructor...\n";
  vector<char> charVec2(std::move(charVec1));
  printVec(charVec2, "charVec2");
  printVec(charVec1, "charVec1");

  // Testing copy assignment
  cout << "\nRestoring charVec1 using charVec2 and copy assignment...\n";
  charVec1 = charVec2;
  printVec(charVec2, "charVec2");
  printVec(charVec1, "charVec1");

  // Testing resize methods with a value smaller than size and a value larger
  // than capacity and recording effects on size and capacity
  cout << "charVec1 size: " << charVec1.size() << '\n';
  cout << "charVec1 capacity: " << charVec1.capacity() << '\n';
  cout << "\nResizing charVec1 to have half the number of elements...\n";
  charVec1.resize(charVec1.size() / 2);
  cout << "charVec1 size: " << charVec1.size() << '\n';
  cout << "charVec1 capacity: " << charVec1.capacity() << '\n';
  printVec(charVec1, "charVec1");
  cout << "\nResizing charVec1 to have space for twice its current " 
          "capacity...\n";
  charVec1.resize(charVec1.capacity() * 2);
  cout << "charVec1 size: " << charVec1.size() << '\n';
  cout << "charVec1 capacity: " << charVec1.capacity() << '\n';
  cout << endl;

  return 0;
}