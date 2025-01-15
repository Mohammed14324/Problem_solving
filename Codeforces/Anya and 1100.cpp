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
 

bool check(const string& s, ll a) {
    if (a < 0 || a >= s.length()) return false;
    
    char curr = s[a];
    char prev1 = (a > 0) ? s[a - 1] : '\0';
    char prev2 = (a > 1) ? s[a - 2] : '\0';
    char prev3 = (a > 2) ? s[a - 3] : '\0';
    char next1 = (a < s.length() - 1) ? s[a + 1] : '\0';
    char next2 = (a < s.length() - 2) ? s[a + 2] : '\0';
    char next3 = (a < s.length() - 3) ? s[a + 3] : '\0';
    
    return (prev1 == '1' && prev2 == '1' && curr == '0' && next1 == '0') ||
    (prev1 == '0' && prev2 == '1' && prev3 == '1' && curr == '0') ||
    (curr == '1' && next1 == '1' && next2 == '0' && next3 == '0') ||
    (prev1 == '1' && next1 == '0' && next2 == '0' && curr == '1');
    
}
int main() {
    ll t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        ll n;
        cin >> n;

        ll count = 0;

        if (s.length() >= 4) {
            for (ll i = 0; i < s.length() - 3; ++i) {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                    ++count;
                }
            }
        }

        while (n--) {
            ll a;
            char c;
            cin >> a >> c;
            --a;

            if (s[a] != c) {
                bool c1 = check(s, a);
                s[a] = c;
                bool c2 = check(s, a);

                if (c2 && !c1) {
                    ++count;
                } else if (c1 && !c2) {
                    --count;
                }
            }

            if (count > 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

}