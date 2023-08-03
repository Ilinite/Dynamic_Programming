#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 1;

    int c = 1;

    int n = 2;

  if(n <= 2)
    return c;
  
  while(n >= 2)
  {
      c = a + b;
      a = b;
      b = c;
    --n;
  }

  return c;
}
