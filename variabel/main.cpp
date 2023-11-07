#include <iostream>

int main(){

  // contoh variabel
  int x; // declarasi sebuah variabel
  x = 2; // inisialisasi value ke variabel

  int y = 3; // deklarasivariabel sekaligus melakukan inisialisasi
  int sum = x + y; // melakukan operaso aritmatika ke variabel
  int sum2 = y * 2;

  // variabel dengan type data double (angka dengan koma)
  double berat = 2.5;

  // char adalah type data single character.
  // jika value yang di masukan ke dalam char lebih dari satu karakter maka karakter paling belakang yang akan di ambil
  // contohnya 'AC' maka yang tampil hanya C
  char grade = 'A'; //gunakan single quote mark '' 

  // bool adalah tipe data true / false
  // boolean akan mereturn o atau 1
  // 0 = false
  // 1 = true
  bool isDiscon = true;
  bool isEmpty = false;

  // string.
  // tipe data ini sebenarnya adalah sebuah object jadi harus membutuhkan header file
  // anggap saja ini tipe data char yang menyimpan banyak karakter char nama[] seperti ini maksutnya.
  // dan dibawah ini contohnya.
  std::string name = "Vania putri";
  std::string address = "Kingtown 23 St.";


  std::cout << x << '\n'; // print variabel ke console
  std::cout << sum << '\n'; // print variabel ke console
  std::cout << "y X 2 = " << sum2 << '\n'; // print variabel ke console
  std::cout << berat << '\n';
  std::cout << grade << '\n';
  std::cout << isDiscon << '\n';
  std::cout << isEmpty << '\n';
  std::cout << name << '\n';
  std::cout << address << '\n';
  std::cout << &name << '\n'; // ini cara mengakses memory dari sebuah variabel hasilnnya pada saat ini adalah 0x61fed8 bisa berbeda tergantung perangkat kerasnya
  std::cout << "Haloo my name is " << name << '\n'; // ini caranya melakukan print string literal


  return 0;
}