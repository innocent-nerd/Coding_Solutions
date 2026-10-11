#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<bool> available(26, false);

    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        available[tolower(s[0]) - 'a'] = true;
    }

    bool possible = true;

    
    for (int i = 0; i < m; i++) {
        string abbr;
        cin >> abbr;
        for (char ch : abbr) {
            if (!available[tolower(ch) - 'a']) {
                possible = false;
            }
        }
    }

    cout << (possible ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}