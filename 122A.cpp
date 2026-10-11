#include <bits/stdc++.h>
using namespace std;
bool lucky(int n){
    
    while (n!=0){
                int d=n%10;
                if (d!=4 && d!=7)
                return false;
                n/=10;
            }
        return true;

}
int main(){
        int n;
        cin>>n;
        int t=0;
        for (int i=1;i<=n;i++){
            if (lucky(i) && n%i==0){
                cout<<"YES"<<"\n";
                t=1;
                break;
            }
            
        }

        if (t==0){
            cout<<"NO"<<"\n";
        }
        
}