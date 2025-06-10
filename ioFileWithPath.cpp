#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    cout << "Masukan Nama File : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis 
    ofstream outfile;
    // menunjuk kedalam sebuah nama file 
    outfile.open(NamaFile + ".txt", ios::out );
    cout << ">= Menulis file \'q\' untuk keluar" << endl; 
    //unlimited loop untuk menulis 
    while (true)
    {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris 
        getline(cin, baris);
        //loop akan berhenti ketika anda memasukan q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari "baris" kedalam file 
        outfile << baris <<endl;
    }
    //selesai dalam menulis tutup file nya 
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    infile.open(NamaFile, ios::in);
    cout << endl << ">= Membuka dan membaca file" << endl;
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris 
        while (getline(infile, baris))
        {
            //dan tampilkan disini
    
}