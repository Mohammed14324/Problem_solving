#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ll n, m;
    cin >> n >> m;
    
    vector<string> arr(n);
    pair<ll, ll> A, B;
    
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        ll pos = arr[i].find('A');
        if (pos != string::npos) A = {i, pos};
        pos = arr[i].find('B');
        if (pos != string::npos) B = {i, pos};
    }
 
    // BFS setup
    deque<pair<ll, ll>> que;
    vector<vector<ll>> seen(n, vector<ll>(m, false));
    vector<vector<char>> directions(n, vector<char>(m, '-')); // To store the directions
    
    // Moves: U, D, L, R
    vector<pair<ll, ll>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<char> move_char = {'U', 'D', 'L', 'R'};
    
    que.push_back(A);
    seen[A.first][A.second] = true;
    
    while (!que.empty()) {
        auto [i, j] = que.front();
        que.pop_front();
        
        if (i == B.first && j == B.second) {
            // Reconstruct path
            string ans;
            while (i != A.first || j != A.second) {
                char dir = directions[i][j];
                ans.push_back(dir);
                if (dir == 'U') i++;
                else if (dir == 'D') i--;
                else if (dir == 'L') j++;
                else if (dir == 'R') j--;
            }
            reverse(ans.begin(), ans.end());
            cout << "YES\n" << ans.length() << "\n" << ans << endl;
            return 0;
        }
        
        for (ll k = 0; k < 4; k++) {
            ll ni = i + moves[k].first;
            ll nj = j + moves[k].second;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && arr[ni][nj] != '#' && !seen[ni][nj]) {
                seen[ni][nj] = true;
                directions[ni][nj] = move_char[k];
                que.push_back({ni, nj});
            }
        }
    }
    
    cout << "NO\n";
    return 0;
}
