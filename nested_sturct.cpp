#include <iostream>
#include <string>
using namespace std;

struct skill{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero{
    string Nama;
    string Role;
    string tipe;
    skill skill;
};


int main()
{
    Hero Wildan[3];

for(int i = 0; i < 3; i++) //mengisi struktur array
{ 
    cout << "Hero ke-";
    cout << "Masukan nama hero";
    getline(cin, Wildan[i].Nama);
    cout << "Masukan Jenis role";
    getline(cin, Wildan[i].Role);
    cout << "Masukan tipe hero";
    cin >> Wildan[i].tipe;
    cin.ignore();

    cout << "Masukan skill 1 ";
    getline(cin, Wildan[i].skill.skill1);
    cout << "Masukan skill 2 ";
    getline(cin, Wildan[i].skill.skill2);
    cout << "Masukan skill 3 ";
    getline(cin, Wildan[i].skill.skill3);

}



    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;


    for(int i = 0; i < 3; i++)
    {
    cout << "Hero ke-" << i+1 << endl;
    cout << endl;
    cout << "Nama Hero = " << Wildan[i].Nama << endl;
    cout << "Role Hero = " << Wildan[i].Role << endl;
    cout << "Tipe Hero = " << Wildan[i].tipe << endl;
    cout << endl;
    }

    
  



}