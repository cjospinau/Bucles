#include <iostream>

int sum(int n);
int main()
{
  int n = 0;

  std::cout << sum(n) << std::endl;

  return 0;
}

int sum(int n)
{
  int count = 0; 
  while(n<=100){
    if(n%2==0) {
      count = count + n;
    }
    else
      {
	count = count;
      }
    ++n; }
  return count;
      
}
