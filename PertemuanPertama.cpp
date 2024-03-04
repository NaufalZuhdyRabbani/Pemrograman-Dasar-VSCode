#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    srand(time(0));

    Bilangan = rand() % 10;
    cout << "Nilai Awal adalah : " << nBilangan << endl;
    
    if(nBilangan % 2 == 0 ){
        nBilangan = nBilangan + 1;
    }
    cout << "Nilainya adalah : " << nBilangan << endl;
    
    retrun 0;

}