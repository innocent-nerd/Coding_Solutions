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
        int fidx=-1;
        int lidx=-1;
        for (int i=0;i<n;i++){
            if (vec[i]!=0){
                if (fidx==-1) fidx=i;
                lidx=i;
            }
        }

        if (fidx!=-1 && vec[fidx]==-1) vec[fidx]=1;
        if (lidx!=-1 && vec[lidx]==-1) vec[lidx]=1;

        for (auto it:vec){
            if (it==-1) cout << "0" << " ";
            else cout << it << " ";
        }

        cout<<"\n";
        
        
        

        

    }
    return 0;
}