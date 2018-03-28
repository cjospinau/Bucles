#include <iostream>
#include <cmath>

int edad(int x);

int main()
{
  int x;
  std::cin >> x;
  edad(x);
  return 0;
}

int edad(int x)
{
  if(x >= 18)
    { std::cout << "Eres mayor de edad" << std::endl;
    }
  return 0; }
