#include <iostream>

double sum(double n);
int main()
{
  double n = 1;

  std::cout << sum(n) << std::endl;

  return 0;
}

double sum(double n)
{
 
  double count = 0;
  
  while(n<=2){
    count = count + 1/n;
    ++n; }
  
  return count;      
}
