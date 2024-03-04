#include <iostream>
using namespace std;

int main(){
    int nilaiMatematika;
    int nilaiFisika;
    int nilaiRerata;
    string status ;

    cout << "Masukkan nilai Matematika ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Fisika ";
    cin >> nilaiFisika;

    nilaiRerata = (nilaiMatematika + nilaiFisika) / 2;
    
    if (nilaiRerata > 60 || nilaiMatematika > 70) {
        status = "Selamat anda lulus. ";
    } else {
        status = "maaf, anda tidak lulus.";
    }

    cout << "Statusnya adalah" << status <<endl;

    return 0;

}