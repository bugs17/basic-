#include <iostream>


int main(){


  /*
    ini contoh penggunaan if statement di C++
    perhatikan logika pengurutannya agar dapat sesuai dengan logic yang di harapkan
  */

  int umur;

  std::cout << "Berapa umur kamu? ";
  std::cin >> umur;

  if (umur >= 100){
   std::cout << "Maaf anda terlalu tuauntuk mengunjungi situs ini";
  }
  else if(umur >= 18){
    std::cout << "Selamat datang di situs ini.";
  }
  else if(umur < 0){
    std::cout << "Anda belum lahir";
  }
  else{
    std::cout << "Maaf anda tidak cukup umur untuk mengunjungi situs ini";
  }

  return 0;
}