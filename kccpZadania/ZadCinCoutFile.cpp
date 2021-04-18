#include <iostream>
#include <fstream>

using namespace std;

void writefile(string str)
{
  ofstream writestream("str.txt");
  writestream << str;
  writestream.close();
  cout << "Data written to str.txt " << endl;
}

void readfile()
{
  string data;
  ifstream readstream("str.txt");
  getline(readstream, data);
  readstream.close();

  cout << "Data read: " << data;
}

int main()
{
  cout << "Standard output" << endl;
  cerr << "Error output" << endl;

  writefile("sup boys");
  readfile();

  return 0;
}
