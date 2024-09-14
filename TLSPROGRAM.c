#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Predefined list of study program that are part of Teknik UGM
    vector<string> teknikUGM = {
        "Teknik Sipil", 
        "Teknik Mesin", 
        "Teknik Elektro", 
        "Teknik Kimia", 
        "Teknik Industri", 
        "Teknik Geologi", 
        "Teknik Arsitektur", 
        "Teknik Nuklir",
        "Teknik Perencanaan Wilayah dan Kota",
        "Teknik Lingkungan",
        "Teknik Geodesi",
        "Teknik Fisika",
        "Teknik Sumber Daya Air",
        "Teknik Biomedis",
        "Teknik Infrastuktur Lingkungan",
        "Teknologi Informasi"

    };

    string inputstudyprogram;
    bool found = false;

    cout << "Masukkan nama program studi teknik: ";
    getline(cin, inputstudyprogram);

    // Check if the input study program is part of Teknik UGM
    for (const auto& dept : teknikUGM) {
        if (inputstudyprogram == dept) {
            found = true;
            break;
        }
    }

    // Output the result
    if (found) {
        cout << inputstudyprogram << " adalah bagian dari Teknik UGM." << endl;
    } else {
        cout << inputstudyprogram << " bukan bagian dari Teknik UGM." << endl;
    }

    return 0;
}