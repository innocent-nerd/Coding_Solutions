#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int x,k;
        cin>>x>>k;
        if (x<k || x%k!=0){
            cout<<"1\n"<<x<<"\n";
        }
        else
        {
            int t1=k+1;
            int t2=x-t1;
            cout<<"2\n"<<t2<<" "<<t1<<"\n";
        }


       

    }
    return 0;
}