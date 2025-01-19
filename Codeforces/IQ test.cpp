#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    if (evenCount > oddCount) {
        for (int i = 0; i < n; ++i) {
            if (numbers[i] % 2 != 0) {
                cout << i + 1;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (numbers[i] % 2 == 0) {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}