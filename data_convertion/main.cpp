#include <iostream>

int main(){

  // convert type data

  int x = 8;
  int y = 10;

  // kalau kaya begini tong tidak akan dapat hasil dari persennya
  //  hasilnya akan 0% karna yang tong coba bagi itu dua" int dan de tidak akan berikan hasil koma
  // tong harus rubah y itu jadi double 
  double hasil = x/y * 100; 

  // ini maksutnya cara merubah type data
  double hasil2 = x / (double)y * 100;
  // jadi 8 / 10 = 0.8 x 100 = 80 jadi hasilnya bisa dapat persennya.
  // kalau dua dua integer 0.8 akan tetap 0 jadi tong ubah de ke bouble dulu

  // contoh lain
  // ini kalo tidak di convert sebelum print hasilnya nanti huruf d kecil
  // asci karakter
  // jadi rubah dulu ke int kalau mau de tampil sebagai angka/int
  char a = 100;


  std::cout << hasil << '%' << '\n'; 
  std::cout << hasil2 << '%' << '\n'; 
  std::cout << (int)a << '\n'; 
  std::cout << (int)a * 2 << '\n'; 

  return 0;
}