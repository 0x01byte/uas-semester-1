#include <iostream>
#include <algorithm> 

using namespace std;

int data[10];
int n;

void output() {
    for (int i = 0; i < n; i++) {
        cout << "[" << data[i] << "] ";
    }
    cout << endl;
}

int main() {
    cout << "ALGORITMA BUBBLE SORT" << endl;
    cout << "----------------------" << endl;

    cout << "Masukan Jumlah Data = ";
    cin >> n;

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Masukan Data Ke-" << i + 1 << " = ";
        cin >> data[i];
    }

    cout << "\nProses Bubble Sort\n";
    output();

    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = n - 1; j >= i; j--) {
            if (data[j] < data[j - 1]) {
                swap(data[j], data[j - 1]); 
                swapped = true;
            }
        }
        output();
        if (!swapped) {
            break; 
        }
    }
    cout << endl;
    return 0;
}

