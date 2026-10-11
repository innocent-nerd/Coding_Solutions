#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map <char,int> mpp;
        for (int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int odd=0;
        for (auto it : mpp){
            if (it.second%2!=0){
                odd+=1;
            }
        }

        if (odd>k+1){
            cout<<"NO\n";
        }
        else
        cout<<"YES\n";

    }
    return 0;
}