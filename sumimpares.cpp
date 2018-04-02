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

  do {
    if(n%2==0){
      count=count; }
    else {
      count = count + n;}
    ++n;
  }

  while(n<=100);
  return count;
}
