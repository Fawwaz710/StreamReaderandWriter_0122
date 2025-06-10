#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    // membuka file dalam mode menulis 
    ofstream outfile;
    // menunjuk ke sebuah nama file 
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    // unlimited loop untuk menulis 
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
    //selesai dalam menulis sekarang tutup filenya 
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;

    
}