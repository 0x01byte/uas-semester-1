#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
  string npm;
  string nama;
  string tanggal_lahir;
  string jurusan;
  string ipk; 
};

int main() {
  Mahasiswa data_mhs[100];
  int jumlah_data = 0;
  char lagi;

  do {
    cout << "NPM\t\t\t\t: "; getline(cin, data_mhs[jumlah_data].npm);
    cout << "Nama\t\t\t\t: "; getline(cin, data_mhs[jumlah_data].nama);
    cout << "Tanggal Lahir (dd-mm-yyyy)\t: "; getline(cin, data_mhs[jumlah_data].tanggal_lahir);
    cout << "Jurusan\t\t\t\t: "; getline(cin, data_mhs[jumlah_data].jurusan);
    cout << "IPK\t\t\t\t: "; getline(cin, data_mhs[jumlah_data].ipk);

    jumlah_data++;

    cout << "\nMau memasukkan data lagi [y/n]? ";
    cin >> lagi;
    cin.ignore();
  } while(lagi == 'y' || lagi == 'Y');

  cout << "\nData Mahasiswa:\n";

  for(int i = 0; i < jumlah_data; i++) {
    cout << "NPM\t\t: " << data_mhs[i].npm << endl
         << "Nama\t\t: " << data_mhs[i].nama << endl
         << "Tanggal Lahir\t: " << data_mhs[i].tanggal_lahir << endl
         << "Jurusan\t\t: " << data_mhs[i].jurusan << endl
         << "IPK\t\t: " << data_mhs[i].ipk << endl << endl;
  }

  return 0;
}

