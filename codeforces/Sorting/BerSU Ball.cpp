#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long bt, gt, z = 0;
    cin >> bt;
    vector<long long> b(bt);
    for (long long i = 0; i < bt; i++) {
        cin >> b[i];
    }
    cin >> gt;
    vector<long long> g(gt);
    for (long long i = 0; i < gt; i++) {
        cin >> g[i];
    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    long long i = 0, j = 0;
    while (i < bt && j < gt) {
        if (abs(b[i] - g[j]) <= 1) {
            z++;
            i++;
            j++;
        } else if (b[i] < g[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << z;
    return 0;
}