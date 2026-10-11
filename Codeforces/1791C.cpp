
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string vec;
        cin>>vec;
        int i,j;
        for ( i=0,j=n-1;i<=j;i++,j--){
            if (vec[i]==vec[j])
            {
                cout<<(j-i)+1<<endl;
                break;
            }
        }
        if (i>j){
            cout<<"0"<<endl;
        }

        
        
        
        

    }
    return 0;
}