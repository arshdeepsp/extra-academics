#include <iostream>
using namespace std;

int substring(string str, string substr) {
    string a = str;
    string b = substr;
    string c;

    int k = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[k]) {
            c += b[k++];
            if (k >= b.size()) { 
                return 1;
            }
        } else {
            if ((a[i] == b[k-1]) && (a[i] == c[1])) {
                c += b[k-1];
            } else {
                k = 0;
                c = "";
            }
        }
    }

    return 0;
}

int main() {
    if (substring("HELLO", "a")) {
        cout << 1;
    } else {
        cout << 0;
    }
}

