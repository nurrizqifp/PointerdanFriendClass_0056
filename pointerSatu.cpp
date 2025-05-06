#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim();

    mahasiswa &refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // Pointer Dereference pMhs
    pMhs->nim = 3; // Arrow operator
    pMhs->showNim();
    return 0;
}