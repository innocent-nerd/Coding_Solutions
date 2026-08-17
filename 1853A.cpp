#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int c=0;
        int min=INT_MAX;
        vector <int> vec (n);
        for (int i=0;i<n;i++){
            cin>>vec[i];
            if (i>=1){
                int cur=vec[i]-vec[i-1];
                if (cur<min){
                    min=cur;
                c=i-1;
                }
            }
        }
        if (!is_sorted(vec.begin(),vec.end())){
            cout<<"0\n";
            continue;
        }
        int turn=0;
        while (is_sorted(vec.begin(),vec.end())){
            turn+=1;
            for (int i=0;i<=c;i++){
                vec[i]+=1;
            }
            for (int j=c+1;j<=n-1;j++){
                vec[j]-=1;
            }
        }
        cout<<turn<<"\n";



    }
    return 0;
}