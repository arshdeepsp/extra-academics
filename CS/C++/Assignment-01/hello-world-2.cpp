#include <iostream>
using namespace std;

int main() {
    const char * hello = "Hello, World!";
    int n;
    string code;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Enter which loop to use: ";
    cin >> code;

    if (code == "for") {
        cout << "Using for loop: \n";
        for (int i = 0; i < n; i++) cout << hello << endl;
    }
    if (code == "while") {
        cout << "Using while loop: \n";
        while (n > 0) {
            cout << hello << endl;
            n--;
        }
    }
    if (code == "do-while") {
        cout << "Using do-while loop: \n";
        do {
            if (n > 0) {
                cout << hello << endl;
                n--;
            }   
        } while (n > 0);
    }

    return 0;
}