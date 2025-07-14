#include <iostream>
#include <fstream>

using namespace std ;

// ofstream = writing to a file

void writeToFile(const string& filename) {
    ofstream outFile(filename) ;

    if (outFile.is_open()) {
        outFile << "First line of text.\n" ;
        outFile << "Second line of text.\n" ;
        cout << "[+] Data written to file.\n" ;
        outFile.close() ;
    } else {
        cerr << "[!] Error: Cannot open file for writing.\n" ;
    }
}

void readFromFile(const string& filename) {
    ifstream inFile(filename) ;
    string line ;

    if(inFile.is_open()) {
        cout << "[+] Reading file contents.\n" ;
        while(getline(inFile, line)) {
            cout << line << endl ;
        }
        inFile.close() ;
    } else {
        cerr << "[!] Error: Cannot open file for reading.\n" ;
    }
}

void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app) ;

    if (outFile.is_open()) {
        outFile << "Appended line of text.\n" ;
        cout << "[+] Data appended to file.\n" ;
        outFile.close() ;
    } else {
        cerr << "[!] Error: Cannot open file for appending" ;
    }
}

int main() {
    string filename = "data.txt" ;

    writeToFile(filename) ;
    readFromFile(filename) ;
    appendToFile(filename) ;
    readFromFile(filename) ;

    return 0 ;
}