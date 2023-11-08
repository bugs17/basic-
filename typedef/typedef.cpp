#include <iostream>
#include <vector>


/*


typedef = ini sering digunakan untuk membuat alias baru dari sebuah type data misalnya untuk menulis type data tersebut panjang sakali
          maka gunakan typedef untuk buat alias supaya mudah di baca, cintohnya ini sa coba pake vector


ini juga berguna skali misalnya tong mau bikin string yang harus gunakan std::string tong bisa bikin alias untuk type data string ini 
contohnya begini

*/ 

typedef std::string text_t; // jadi nanti kalo mau bikin string dibawah tong tinggal pake alias ini saja
typedef int number_t;



// coba buat alias type data dengan typedef

typedef std::vector<std::pair<std::string, int>> namabaru_t; // garis bawah _t itu menandakan kalo itu typedef atau alias dari data type


// tapi di anjurkan selain menggunakan tydef lebih baik menggunkan using karna lebih baik dan bisa buat untuk
// template nanti. contohnya pake using kaya di file using.cpp

int main(){

  //  nah karna tong su buat alias untuk data type yang panjang di atas itu jadi tong tinggal pake saja dari pada tulis lagi
  namabaru_t variabel_x; 

  text_t nama = "Azovy John"; // ini jadi string
  number_t umur = 25;

  std::cout << nama << '\n';
  std::cout << umur << '\n';


  return 0;
}