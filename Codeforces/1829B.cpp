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
        int large=0;
        int cur=0;
        for (int i=0;i<n;i++){
            if (vec[i]==0){
                cur+=1;
                if (cur>large){
                    large=cur;
                }
            }
            else
            cur=0;
        }

        cout<<large<<"\n";




       

    }
    return 0;
}