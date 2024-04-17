// Reading and writing from the same file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("result1.txt");
    f<<"Hello";
    f.close();
    cout<<"Data Saved\n";
    ifstream of("result.txt");
    if (!of.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;   
    }
    string line;
    while (getline(of, line)) {
        cout << line << endl;
    }
    of.close();
    return 0;
}