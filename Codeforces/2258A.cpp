#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> vec(n);

        for (int i=0;i<n;i++){
            cin>>vec[i];
        }
        int c=gcd(vec[0],vec[n-1]);

        cout<<c<<"\n";


    }
    return 0;
}