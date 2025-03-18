#include <iostream>
using namespace std;

float hitungLuasPersegiPanjang(float p, float l){
    return p * l;
}

float hitungLuasSegitiga(float a, float t){
    return 0.5 * a* t;
}

int main(){
    int pilihan;
    float panjang, lebar, alas, tinggi;
    do{
        cout << "<===============Menu=============>" << endl;
        cout << "1. Menghitung luas persegi panjang" << endl;
        cout << "2. Menghitung luas segitiga" << endl;
        cout << "3. Exit" << endl;
        cout << pilihan;
        switch(pilihan){
            case 1:
            cout << endl;
            cout << "Menghitung luas persegi panjang" << endl;
            cout << endl;
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukankan lebar = ";
            cin >> lebar;
            cout << "Luas persegi panjang = " <<
            hitungLuasPersegiPanjang(panjang, lebar) << endl;
            cout << endl;
            break;
        case 2:
        cout << endl;
        cout << "Menghitung luas segitiga" << endl;
        cout << endl;
        cout << "Masukkan alas = ";
        cin >> alas;
        cout << "Masukankan tinggi = ";
        cin >> tinggi;
        cout << "Luas segitiga = " <<
        hitungLuasSegitiga(alas, tinggi) << endl;
        cout << endl;
        break;
        case 3:
        break;
        default :
        cout << endl;
        cout << "ilihan anda salah!" << endl;
        cout << endl;
        break;
        }
    }while(pilihan != 3);
}