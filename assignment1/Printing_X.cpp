#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int before_space = 0;
    int after_space = n - 2;

    for (int i = 0; i < n; i++) {
        if (i == n / 2) {
            for (int j = 0; j < n / 2; j++) {
                cout << " ";
            }
            cout << "X" << endl;
        } else if (i < n / 2) {
            for (int j = 0; j < before_space; j++) {
                cout << " ";
            }
            cout << "\\";
            for (int j = 0; j < after_space; j++) {
                cout << " ";
            }
            cout << "/" << endl;
            before_space++;
            after_space -= 2;
        } else {
            before_space--;
            after_space += 2;
            for (int j = 0; j < before_space; j++) {
                cout << " ";
            }
            cout << "/";
            for (int j = 0; j < after_space; j++) {
                cout << " ";
            }
            cout << "\\" << endl;
        }
    }
    return 0;
}
