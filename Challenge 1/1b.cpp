#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string input;
  fstream file;
  file.open("input.txt", ios::in);

  file >> input;

  int half_length = input.length()/2;

  for (int i = 0; i < half_length; ++i)
    input += input[i];

  int i = 0, sum = 0;

  while (i <= half_length *2-1)
  {
    if (input[i] == input[i + half_length])
      sum += input[i] - 48; // 'ascii to int'

    i++;
  }

  cout << sum << endl;

  return 0;
}

