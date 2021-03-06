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
  input += input[0];        //after last digit there is a first digit, challenge rules

  int i = 0, sum = 0;

  while (i < input.length() - 1)
  {
    if (input[i] == input[i + 1])
      sum += input[i] - 48; // ascii to int
      
    i++;
  }

  cout << sum << endl;

  return 0;
}

