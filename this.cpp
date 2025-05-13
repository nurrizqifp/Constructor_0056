#include <iostream>
using namespace std;

class buku{
    
    string judul;

    public:
        string setget(string jdl){
            this->judul = jdl;    // nilai parameter 'judul' untuk member variabel judul
            return this ->judul;    // return variabel judul
        }
};

int main()
{
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}

// jika kalian ketemu this, itu adalah bagian dari constructor