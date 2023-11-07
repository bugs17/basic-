#include <iostream>

// buat namespace

namespace first{
  // disini tong bikin variabel dengan nama x juga kaya yang di scope lokal
  int x = 3;
}

namespace second{
  // disini tong bikin variabel dengan nama x juga tetapi beda namespcae
  int x = 5;
}

int main(){
  // namespace ini digunakan akan agar mencegah benturan penggunaan nama pada nama variabel
  // ini berguna kalau aplikasi sudah berukuran besar. jadi nantinya jika ada dua variabel dengan nama yang sama
  // tidak akan terjadi benturan karena berada di namespace yang berbeda.
  // dan namespace di buat di luar main function

  // disini sa coba bikin variabel x didalam sini sebutannya variabel lokal
  // int x = 0;

  // std::cout << x << '\n'; // ini tong akses x yang di scope lokal
  std::cout << first::x << '\n'; // ini akses x yg di ns first
  std::cout << second::x << '\n'; // ini akses x yg di ns second


  // kalau mau panggil x yang ada di name scpe tanpa menggunakan prefix first:: atau second::
  // tong harus gunakan yang namanya using namespace tetapi hapus dulu variabel x yang lokal
  // contohnya begini
  using namespace first;

  // disini sa akan panggil x dan x yang di namespace first yg akan dipanggil

  std::cout << x; // hasilnya 3 sama sperti x yang di namespace first




  return 0;
}