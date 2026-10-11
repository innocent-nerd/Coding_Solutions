#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        
        int c = 0;
        int last_b = n; 

        for (int i = 0; i < n; i++) {
            int j = vec[i];         
            int target = j - 1;     

            
            if (vec[target] != i + 1) {
                c = 1;
                break;
            }

            
            if (i < target) {
               
                if (target >= last_b) {
                    c = 1; 
                    break;
                }
                last_b = target; 
            }
        }

        if (c == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}