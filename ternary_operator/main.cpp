#include <iostream>

int main(){


  /*
  
  ternary operator = di gunakan untuk menulis block if else dalam satu baris di awali dengan ? pada sesuatu yang
                      ingin dicek nilainya dan setalah tanda ? adalah block true nya dan setelah itu tanda 
                      : dan block else nya.
  
  contoh penggunaan.
  
  */

 int nilai = 70;
 nilai >= 70 ? std::cout << "Anda lulus\n\n" : std::cout << "anda harus mencoba lagi\n\n";

 
 
  // atau seperti ini juga bisa
  // ini akan menentukan nilai price tergantung dari nilai isDiscount apakah true or false
  // dan pengecekan di lakukan menggunakan ternary jadi di tulus di dalam satu baris atau menggunakan ?:

  bool isDiscount = true;
  double price;

  isDiscount ? price = 25000 : price = 40000;
  std::cout << "Rp." << price;

  return 0;
}