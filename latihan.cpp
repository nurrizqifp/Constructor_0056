#include <iostream>
using namespace std;

class Barang;
class DataBarang{
    public:
        void inputBarang(Barang &brg);
        void outputBarang(Barang &brg);
};

class Barang
{
    private:
        string namaBarang;
        int kodeBarang;

    friend void DataBarang::inputBarang(Barang &brg);
    friend void DataBarang::outputBarang(Barang &brg);
};

void DataBarang::inputBarang(Barang &brg)
{
    {cout<<"Input Nama Barang: "; cin >> brg.namaBarang;}
    {cout<<"Masukkan Kode Barang: "; cin >> brg.kodeBarang;}
}

void DataBarang::outputBarang(Barang &brg)
{
    cout << "Kode Barang : " << brg.kodeBarang << endl;
    cout << "Nama Barang : " << brg.namaBarang << endl;
}