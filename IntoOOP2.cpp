#include <iostream>
using namespace std;

class bangunDatar{

    //akses modifer
    private:
        float panjang, lebar;
    public:
        float luas;

        void input(){ //metode input persegi panjang
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
        }
}