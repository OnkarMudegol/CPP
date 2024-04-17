#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("result.txt");

    if (!f.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;   
    }

    string line;
    while (getline(f, line)) {
        cout << line << endl;
    }

    f.close();

    return 0;
}