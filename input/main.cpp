#include <iostream>

int main(){

  // terima inputan
  // kalau berikan output atau print sering gunakan cout
  // kalau insert gunakan cin dan de ada di std juga
  // skrng tong coba buat sata variabel kosong lalu tong terima input
  // dan masukan input ke variabel itu lalu output di terminal


  std::string nama;
  std::string nama2;
  int umur;

  std::cout << "Ko umur brapa?" << '\n';
  std::cin >> umur; // disini tong terima input dan simpan ke variabel nama. perhatikan tanda >>

  // tapi masih ada kekurangan dengn kode diatas karna cin hanya mencimpan satu kalimat di awal
  // kalau ada spaci maka kalimat berikut tidak akan di tampilkan.
  // kalau mau tampil semua gunakan method getline kaya begini
  std::cout << "Ko pu nama siapa? " << '\n';
  std::getline(std::cin >> std::ws , nama2);


  // tampilkan value dari inputan

  std::cout << "Hallo " << nama2 << '\n';
  std::cout << "KO kaka karna ko umur " << umur << '\n';

  return 0;
}