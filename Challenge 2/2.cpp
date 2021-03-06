#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  fstream input;
  input.open("input.txt", ios::in);

  int n, sum = 0, max = 0, min;

  for (int i = 0; i < 16; ++i)
  {
    for (int j = 0; j < 16; ++j)
    {
      input >> n;
      
      if (j == 0) {
        min = n;
        max = n;
      }

      if (n > max)
        max = n;

      else if (n < min)
        min = n;    
    }
    sum += max - min;
  }

  cout << sum << endl;
  return 0;
}

