#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isDiv(int a, int b)                          //short function checking if a is divisable by b,
{                                                 //propably many ways do it smarter
  return ((double)a / b == a / b) ? true : false;
}

int main()
{
  fstream input;
  input.open("input.txt", fstream::in);

  int n, sum = 0, max = 0, min;

  int tab[16][16];

  for (int i = 0; i < 16; ++i)
    for (int j = 0; j < 16; ++j)
      input >> tab[i][j];

  for (int i = 0; i < 16; ++i) 
  {
    for (int j = 0; j < 16; ++j)    
    {
      for (int k = 0; k < 16; ++k)  
      {
        if (isDiv(tab[i][j], tab[i][k]) && tab[i][j] != tab[i][k])
        {
          sum += tab[i][j] / tab[i][k];
          break;
        }
      }
    }
    
  }
  cout << sum << endl; 
  return 0;
}

