#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    public:
    mahasiswa(int nim, string nama); // Langsung Deklarasi Parameter
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama)
{
cout << "Constructor Terpanggil" << endl;
cout << "NIM : " << nim << endl;
cout << "Nama : " << nama << endl;
}