#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = "<<nim<<endl;
    }
};

int main (){

    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer Refrence refMhs
    refMhs.nim = 2; //member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer Dereference pMhs
    pMhs ->nim = 3; //Arrow operator
    pMhs ->showNim();
    return 0;

}