#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i=0;i<n;i++){
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());
        if (vec.front()==vec.back()){
            cout<<"NO"<<endl;
            continue;
        }
        else{
        cout<<"YES"<<"\n";
        cout<<vec[n-1]<<" ";
        for (int i=0;i<n-1;i++){
            cout<<vec[i]<<" ";
        }

        cout<<"\n";
        }

    }
    return 0;
}