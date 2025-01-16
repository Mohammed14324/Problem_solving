#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(), vt.end()
#define For(i, n) for(ll i = 0; i < n; i++)
#define VTL vector<ll>
#define VT vector
#define YES cout << "YES\n";
#define NO cout << "NO\n";
const ll INF = 1e18;
const ll N = 1e6 + 1;
 
ll dis[N];
vector<tuple<ll, ll, ll>> edges;
 
void solve(ll start, ll n, ll m) {
    fill(dis, dis + N, -INF);
    dis[start] = 0;
    
    
    for (ll i = 1; i < n; i++) {
        bool updated = false;
        for (auto& [u, v, w] : edges) {
            if (dis[u] != -INF && dis[u] + w > dis[v]) {
                dis[v] = dis[u] + w;
                updated = true;
            }
        }
        if (!updated) break;
    }
    
    
    bool is_neg = false;
    for (auto& [u, v, w] : edges) {
        if (dis[u] != -INF && dis[u] + w > dis[v]) {
            
            vector<bool> visited(n + 1, false);
            queue<ll> q;
            
            q.push(v);
            visited[v] = true;
            while (!q.empty()) {
                ll curr = q.front();
                q.pop();
                if (curr == n) {
                    is_neg = true;
                    break;
                    
                }
                for (auto &[a, b, c] : edges) {
                    if (a == curr && !visited[b]) {
                        visited[b] = true;
                        q.push(b);
                    }
                }
            }
            if (is_neg) break;
        }
    }
 
    if (is_neg) {
        cout << "-1\n";
    } else if (dis[n] == -INF) {
        cout << "-1\n";
    } else {
        cout << dis[n] << "\n";
    }
}
 
int main() {
    
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
    }
    
    solve(1, n, m);
}
