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
        int two=0;
        for (int i=0;i<n;i++){
            if (vec[i]==2)
            two+=1;
        }

        if (two%2==0 && two!=0){
            int k;
            two=two/2;
            for (int i=0;i<n;i++){
                if (vec[i]==2)
                two-=1;

                if (two==0){
                    k=i;
                break;}
            }


            cout<<(k+1)<<"\n";
        }
        else if (two==0)
        cout<<"1"<<"\n";
        else if (two%2!=0)
        cout<<"-1"<<"\n";

    }
    return 0;
}