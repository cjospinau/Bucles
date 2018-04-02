#include <iostream>
#include <cmath>

int primo(int n);

int main()
{
  int n;
  
  std::cout << "Introduzca un número natural" << std::endl;
  std::cin >> n;
  
  primo(n);
  return 0;
}

int primo(int n)
{
  int ii;
  int cont = 0;
  for(ii=1; ii<=n ; ii++){
    if(n%ii==0){
      cont++;}
    else {
      cont = cont;}
  }
    
    if(cont==2){
      std::cout << "El número es primo" << std::endl; }
    else{
      std::cout << "El número no es primo" << std::endl; }
    return cont;
}
