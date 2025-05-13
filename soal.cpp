#include <iostream>
using namespace std;

class BangunDatar;

class PersegiPanjang {
    public:
        void input(BangunDatar &bd);
        void output(BangunDatar &bd);
};

class BangunDatar {
    private:
        float panjang, lebar;
        
        float hitungLuas() {
            return panjang * lebar;
        }

        float hitungKeliling() {
            return 2 * (panjang + lebar);
        }

        friend void PersegiPanjang::input(BangunDatar &bd); // akses ke panjang lebar
        friend void PersegiPanjang::output(BangunDatar &bd); // akses ke fungsi
};

void PersegiPanjang::input(BangunDatar &bd) {
    cout << "Masukkan panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan lebar : ";
    cin >> bd.lebar;
}

void PersegiPanjang::output(BangunDatar &bd) {
    cout << "Luas : " << bd.hitungLuas() << " cm^2" << endl;
    cout << "Keliling : " << bd.hitungKeliling() << " cm" << endl;
}

int main() {
    PersegiPanjang pP;
    BangunDatar bD;

    pP.input(bD);
    pP.output(bD);

    return 0;
}