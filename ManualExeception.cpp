#include <iostream>
using namespace std;

int main() 
{
    // membuat isi dari try untuk pengujian error
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        //throw 0.5; //melemparkan sebuah integer maka
        cout << "pernyataan tidak akan ditampilkan" << endl;
    }
    // kondisi jika throw yang bertipe data interger
    catch (int a) 
    {
        cout << "pengecualian akan di eksekusi" << endl;
    }
    //kondisi jika throw bertipe data selain interger
    catch (...) 
{
cout << "default pengecualian diekseskusi" << endl;
}
    return 0;
}