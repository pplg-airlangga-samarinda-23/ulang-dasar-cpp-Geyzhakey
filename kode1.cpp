#include <iostream>
using namespace std;

void cetakdata(string nama,string nisn, string jurusan,int TinggiBadan){}

int main() {
    int TinggiBadan= 100000 ;
    string nama="Geyzha", nisn="86240";
    string jurusan="PPLG";
    
    cout << "masukkan nama anda : " << nama << endl;

    cout << "masukkan nisn anda : " << nisn << endl;

    cout << "apa jurusan anda : " << jurusan << endl;

    cout << "berapa tinggi badanmu : " << TinggiBadan << endl;

    cetakdata(nama,nisn,jurusan,TinggiBadan);

    cout << "Selamat Datang di SMK TI Airlangga" << endl;
    
    return 0;
}