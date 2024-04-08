#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char KodeHari;
    cout << "PROGRAM MENENTUKAN NAMA HARI" << endl;
    cout << "A = SENIN\tC = RABU\tE = JUM'AT" << endl;
    cout << "B = SELASA\tD = KAMIS\tF = SABTU\tG = AHAD" << endl;
    cout << "Masukkan Kode Hari (A..G) : ";
    cin >> KodeHari;
    KodeHari = toupper(KodeHari); 

    switch (KodeHari) {
        case 'A':
            cout << "SENIN" << endl;
            break;
        case 'B':
            cout << "SELASA" << endl;
            break;
        case 'C':
            cout << "RABU" << endl;
            break;
        case 'D':
            cout << "KAMIS" << endl;
            break;
        case 'E':
            cout << "JUM'AT" << endl;
            break;
        case 'F':
            cout << "SABTU" << endl;
            break;
        case 'G':
            cout << "AHAD" << endl;
            break;
        default:
            cout << "Kode hari tidak valid!" << endl;
    }

    return 0;
}

