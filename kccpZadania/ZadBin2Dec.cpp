#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  unsigned int num = 0;
  string bin;
  cout << "Input binary number: ";
  getline(cin, bin);

  for (int i = bin.length() - 1; i >= 0; i--)
    if (bin[bin.length() - i - 1] == '1')
      num = num + 1 * pow(2, i);

  cout << num << endl;
  return 0;
}
