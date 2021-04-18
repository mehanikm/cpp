#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  // No big difference in what user sees/does
  cout << "Print cpp" << endl;
  printf("Print c\n");

  int num;
  cout << "Input cpp: ";
  cin >> num;
  printf("Input c: ");
  scanf(" %d", &num);

  int *pointer;
  pointer = &num;

  cout << "Pointer cpp: " << pointer << endl;
  printf("Pointer c: %p\n", pointer);

  cout << "Points to cpp " << *pointer << endl;
  printf("Points to c: %d\n", *pointer);

  cout << "Hex C++: " << hex << num << endl;
  printf("Hex C: %x\n", num);

  return 0;
}
