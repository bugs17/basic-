#include <iostream>


// menggunakan using
using text_t = std::string;
using number = int;


int main(){

  // using ni sama juga kaya typedef tetapi lebih di sarankan penggunaannya

  text_t nama = "rionaldi lausiri";
  number umur = 25;

  std::cout << "Nama saya " << nama << " saya berusia " << umur << '\n';

  return 0;
}