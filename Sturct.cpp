#include <iostream>
using namespace std;


struct Hero{
    string Nama;
    string Role;
    string tipe;
};


int main()
{
    Hero Wildan;

    cout << "Masukan nama hero";
    cin >> Wildan.Nama;
    cout << "Masukan Jenis role";
    cin >>  Wildan.Role;
    cout << "Masukan tipe hero";
    cin >> Wildan.tipe;

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    cout << "Nama Hero = " << Wildan.Nama << endl;
    cout << "Role Hero = " << Wildan.Role << endl;
    cout << "Tipe Hero = " << Wildan.tipe << endl;
    cout << endl;

    
  



}