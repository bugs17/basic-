#include <iostream>

int main(){

  /*
  
  disini contoh penggunaan switch case. ini pada beberapa kasus sebaiknya menggunakan switch case
  untuk melakukan pengecekan di bandingkan melakukan if statement
  
  */

 int bulan;

 std::cout << "Masukan bulan (1-12)";
 std::cin >> bulan;


    switch (bulan)
    {
    case 1:
      std::cout << "January";
      break;

    case 2:
      std::cout << "February";
      break;
      
    case 3:
      std::cout << "Maret";
      break;

    case 4:
      std::cout << "April";
      break;

    case 5:
      std::cout << "Mey";
      break;

    case 6:
      std::cout << "Juni";
      break;

    case 7:
      std::cout << "Juli";
      break;

    case 8:
      std::cout << "Agustus";
      break;

    case 9:
      std::cout << "September";
      break;

    case 10:
      std::cout << "Oktober";
      break;

    case 11:
      std::cout << "November";
      break;
      
    case 12:
      std::cout << "Desember";
      break;
    
    default:
      std::cout << "Bulan yang anda pilih tidak ada";
    }


  return 0;
}