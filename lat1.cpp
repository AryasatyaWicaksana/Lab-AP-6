#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string nama;
    int nim;
    char kom;
    float ip;

    //cout << "Hello world"<< endl;

    cout <<"Masukkan nama : ";
    //cin >> nama;
    getline(cin, nama);

    cout <<"Masukkan nim : ";
    cin >> nim;

    cout <<"Masukkan kom : ";
    cin >> kom;

    cout <<"Masukkan ip : ";
    cin >> ip;

   
    cout << "Nama : " <<nama<<endl;
    cout << "Nim : " <<nim<<endl;
    cout << "Kom : " <<kom<<endl;
     cout << fixed << setprecision(2);
    cout << "ip : " <<ip<<endl;

    return 0;
}