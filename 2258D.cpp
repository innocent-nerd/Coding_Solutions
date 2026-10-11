#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        int cntzero=0;
        for (int i=0;i<n;i++){
            cin>>vec[i];
            if (vec[i]==0){
                cntzero+=1;
            }
        }

        if (cntzero==1){
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
        string ans(n,'A');
        bool usedZero=false;
        for (int i=0;i<n;i++){
            if (vec[i]!=0){
                ans[i]='A';
            }
            else if (!usedZero){
                ans[i]='B';
                usedZero=true;
            }
            else{
                ans[i]='C';
            }
        }
        cout<<ans<<"\n";

        

    }
    return 0;
}