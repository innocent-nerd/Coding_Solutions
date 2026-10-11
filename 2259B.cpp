#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> vec(n);
        int odd=0;
        int two_even=0;
        int two_odd=0;
        for (int i=0;i<n;i++){
            cin>>vec[i];
            if (vec[i]%2!=0){
                odd+=1;
            }
            else if (vec[i]%2==0){
                if ((vec[i]/2)%2!=0)
                two_odd+=1;
                else if ((vec[i]/2)%2==0){
                    two_even+=1;
                }
            }
        }

        int high=max({odd,two_even,two_odd});

        cout<<high<<"\n";
        
        
        

        

    }
    return 0;
}