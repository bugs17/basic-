#include <iostream>
#include <cmath>

int main(){

  /*
  
  rumusnya adalah = C = √(a^2 + b^2)
  
  */

  double c;     // sisi yang miring
  double a; // sisi yang lurus
  double b; // alas


  std::cout << "masukan nilai alas : ";
  std::cin >> b ;

  std::cout << "masukan nilai sisi lurus : ";
  std::cin >> a;

  c = sqrt((a * a) + (b * b));
  // c = sqrt(pow(a,2) + pow(b,2)); // atau bisa gunakan fungsi pow kaya begini

  
  std::cout << "Kemiringan segitiga siku-siku adalah = " << c;


  return 0;
}