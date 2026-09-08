#include <iostream>

using namespace std;

int main() {
    int n;
    int openGate;
    int closeGate;

    cout << "Masukkan jumlah perintah: ";
    cin >> n;

    string commands[n];
    for (int i = 0; i < n; i++) {
        string command;

        cout << "Masukkan perintah ke-" << i + 1 << ": ";
        cin >> command;

        if (command == ")" && openGate % 2 != 0) {
            cout << "NO" << endl;
            break;
        } else {
            if (command == "(") {
                openGate++;
            } else if (command == ")") {
                closeGate++;
            }
        }
    }

    if (openGate % 2 != 0 || closeGate % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    // for (int i = 0; i < n; i++) {
    //     if (i == 0 && commands[i] == ")") {
    //         cout << "NO" << endl;
    //         break;
    //     } else if (true) {
    //         while ()
    //     }
    // }

    return 0;
}