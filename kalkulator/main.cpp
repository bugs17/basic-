#include <iostream>


int main(){

  /*
  meminta input operasi matematika
  meminta input nilai1
  meminta input nilai2

  melakukan operasi matematika
  menampilkanhasil.
  */

  std::cout << "*****************KALKULATOR****************" << '\n';
  char op;
  double nilai1;
  double nilai2;
  double hasil;

  std::cout << "Masukan operator matematika (x,/,+,-,%) : ";
  std::cin >> op;
  
  std::cout << "Masukan nilai pertama : ";
  std::cin >> nilai1;

  std::cout << "Masukan nilai kedua : ";
  std::cin >> nilai2;

  switch (op)
  {
  case 'x':
    hasil = nilai1 * nilai2;
    break;
  
  case '/':
    hasil = nilai1 / nilai2;
    break;
  
  case '+':
    hasil = nilai1 + nilai2;
    break;
  
  case '-':
    hasil = nilai1 - nilai2;
    break;
  
  case '%':
    hasil = (int)nilai1 % (int)nilai2;
    break;
  
  default:
    break;
  }

  if (op == 'x' | op == '/' | op == '+' | op == '-' | op == '%' )
  {
    std::cout << "Hasil dari " << nilai1 << ' ' << op << ' ' << nilai1 << " = " << hasil << '\n';

  }else{
    std::cout << "Operator tidak diketahui" << '\n';
  }
  

  std::cout << "*******************************************";


  return 0;
}