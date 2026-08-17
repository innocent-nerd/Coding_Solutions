#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,k,x;
        int c=0;
        cin>>n>>k>>x;
        if (x!=1){
            cout << "YES\n";
            cout<<n<<"\n";
            while (n!=0){
                cout<<"1 ";
                n-=1;
            }

        }
        else{
            if (k==1 || n==1 || (k==2 && n%2!=0)) {
                cout << "\nNO\n";
            }

            else if (n%2==0){
                cout<<"YES\n";
                cout<<n/2<<"\n";
                int temp=n/2;
                while (temp--){
                    cout<<"2 ";
                }
                cout<<"\n";
            }
            else{
                cout << "YES\n";
                cout << n / 2 << "\n"; 
                int temp=(n-3)/2; 
                while (temp!=0){
                    cout<<"2 ";
                    temp-=1;
                }
                cout<<"3 \n";
            }
        }

       

    }
    return 0;
}