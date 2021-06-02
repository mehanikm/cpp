#include <iostream>

using namespace std;

union MyUnion
{
  int myint;
  float myfloat;
};

int main()
{

  MyUnion mu;
  cout << "Setting my integer" << endl;
  mu.myint = 1;
  cout << "My integer:\t" << mu.myint << endl;
  cout << "My float:\t" << mu.myfloat << endl;

  cout << "Setting my float" << endl;
  mu.myfloat = 3.1;
  cout << "My integer:\t" << mu.myint << endl;
  cout << "My float:\t" << mu.myfloat << endl;
  return 0;
}
