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
        int total=0;
        for (int i=0;i+k<=n;i=i+k){
            string test=s.substr(i,k);
            if (test.find('0') == string::npos)
            total+=1;
        }

        cout<<total<<"\n";
        

        

    }
    return 0;
}