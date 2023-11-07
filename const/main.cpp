#include <iostream>


int main(){
  /*  
  
  
  conts adalah cara untuk membuat sebuah variabel yang nilainya tidak dapat di ubah
  tinggal menambah key const di depan type data dan nama variabel saat melakukan deklarasi contohnya ini

  const int sebuahAngka = 12345

  jika sudah begitu maka nilai dari variabel sebuahAngka sudah tidak bisa di ubah/di reasignmnet
  kalau tong coba lakukan seperti ini
  
  sebuahAngka = 54321
  maka akan terjadi error karena variabel itu bersifat const tidak dapat di ubah
  
  */

  // conntohnya dsini kita mencari luas lingkaran yang mempunyai nilai yang tidak berubah yaitu 3.14159
  // jadi nilai ini bisa kita simpan dalam const agar tidakdi ubah ubah 
  // dan best practice nya biasa const di namai dengan huruf besar untuk memberi tahu bahwa variabel tersebut adalah const
 const double PI = 3.14159;
 double radius = 7;
 const double LUAS_LINGKARAN = 2 * PI * radius; // ini juga kirta buat dalam const karena rumus ini tidak berubah alisa konstan

 std::cout << LUAS_LINGKARAN << '\n';


  return 0;
}
