#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int u = 0, l = 0;
    for (char c : s) {
        if (islower(c)) {
            l++;
        }
        else {
            u++;
        }
    }
    if (u == n) { // All uppercase
        for (char c : s) {
            cout << char(tolower(c));
        }
    }
    else if (u == n-1 && islower(s[0])) { // Capitalize first letter
        cout << char(toupper(s[0]));
        for (int i = 1; i < n; i++) {
            cout << char(tolower(s[i]));
        }
    }
    else { // Other cases
        cout << s;
    }
    return 0;
}