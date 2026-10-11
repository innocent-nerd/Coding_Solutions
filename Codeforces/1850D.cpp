
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());
    int c=1;
    int largest=1;
    for (int i=1;i<n;i++){
        if (vec[i]-vec[i-1]<=k){
            c+=1;
        }
        else
        c=1;
        largest=max(c,largest);
    }

    cout<<n-largest<<endl;

    }
    return 0;
} 