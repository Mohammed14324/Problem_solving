#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(),vt.end()
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define line cout<<'\n'
 
const ll N = 1e3 + 5;
VT<VT<pair<ll, ll>>> parent(N, VT<pair<ll, ll>>(N));
VT<VTL> dis(N, VTL(N, LLONG_MAX));
VT<VTL> dis_mon(N, VTL(N, LLONG_MAX));
 
int main() {
    ll n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    queue<pair<ll, ll>> que;
 
    // Process monster distances
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (arr[i][j] == 'M') {
                que.push({i, j});
                dis_mon[i][j] = 0;
            }
        }
    }
 
    while (!que.empty()) {
        auto [i, j] = que.front();
        que.pop();
        vector<pair<ll, ll>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto [di, dj] : directions) {
            ll ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && arr[ni][nj] != '#' &&
                dis_mon[ni][nj] > dis_mon[i][j] + 1) {
                dis_mon[ni][nj] = dis_mon[i][j] + 1;
                que.push({ni, nj});
            }
        }
    }
 
    pair<ll, ll> start;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (arr[i][j] == 'A') {
                start = {i, j};
            }
        }
    }
 
    que.push(start);
    dis[start.first][start.second] = 0;
    bool can = false;
    pair<ll, ll> end;
 
    while (!que.empty()) {
        auto [i, j] = que.front();
        que.pop();
 
        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
            can = true;
            end = {i, j};
            break;
        }
 
        vector<pair<ll, ll>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto [di, dj] : directions) {
            ll ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && arr[ni][nj] == '.' &&
                dis[ni][nj] > dis[i][j] + 1 && dis[i][j]+1 < dis_mon[ni][nj]) {
                dis[ni][nj] = dis[i][j] + 1;
                parent[ni][nj] = {i, j};
                que.push({ni, nj});
            }
        }
    }
 
    if (!can) {
        NO;
        return 0;
    }
 
    YES;
    string path = "";
    while (end != start) {
        auto [i, j] = end;
        auto [pi, pj] = parent[i][j];
        if (pi == i - 1) path += 'D';
        else if (pi == i + 1) path += 'U';
        else if (pj == j - 1) path += 'R';
        else if (pj == j + 1) path += 'L';
        end = parent[i][j];
    }
    cout<<path.length()<<endl;
    reverse(path.begin(), path.end());
    cout << path << endl;
 
    return 0;
}
