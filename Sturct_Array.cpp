#include <iostream>
using namespace std;


struct Hero{
    string Nama;
    string Role;
    string tipe;
};


int main()
{
    Hero Wildan[3];

    for(int i = 0; i < 3; i++){ 
    cout << "Hero ke-";
    cout << "Masukan nama hero";
    cin >> Wildan[i].Nama;
    cout << "Masukan Jenis role";
    cin >>  Wildan[i].Role;
    cout << "Masukan tipe hero";
    cin >> Wildan[i].tipe;
    }


    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;


    for(int i = 0; i < 3; i++){
    cout << "Hero ke-" << i+1 << endl;
    cout << "Nama Hero = " << Wildan[i].Nama << endl;
    cout << "Role Hero = " << Wildan[i].Role << endl;
    cout << "Tipe Hero = " << Wildan[i].tipe << endl;
    cout << endl;
    }

    
  



}