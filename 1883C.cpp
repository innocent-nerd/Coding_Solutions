#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector <int> vec(n);
        int even=0;
        int minimum=INT_MAX;
        for (int i=0;i<n;i++){
            cin>>vec[i];
            //int cur=vec[i]/k;
            //int t=(k*(cur+1))-vec[i];
            if (vec[i]%2==0){
                even++;
            }
            if (vec[i]%k==0){
                minimum=0;
                
            }
            else
            minimum=min(k-(vec[i]%k),minimum);
        }

        if (k==4){
            if (even>=2){
                minimum=0;
            }
            else if (even==1){
                minimum=min(minimum,1);
            }
            else if (even==0){
                minimum=min(minimum,2);
            }

        }
        cout<<minimum<<"\n";
    }
}