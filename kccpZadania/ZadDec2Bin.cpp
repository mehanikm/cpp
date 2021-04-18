#include <iostream>
#include <string>

using namespace std;

int main()
{
  unsigned int dec;
  string val;

  cout << "Input decimal number: ";
  cin >> dec;

  while (dec != 0)
  {
    val = val + to_string(dec % 2);
    dec /= 2;
  }

  reverse(val.begin(), val.end());
  cout << val << endl;

  return 0;
}
