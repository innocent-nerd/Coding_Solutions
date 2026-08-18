#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> vec(n);
        int neg=0,pos=0;
        for (int i=0;i<n;i++){
            cin>>vec[i];
            if (vec[i]==-1)
            neg+=1;
            else
            pos+=1;
        }
        int turn =0;
        while (neg%2!=0 || pos<neg){
            
            pos=pos+1;
            neg-=1;
            turn+=1;
            
        }

        cout<<turn<<"\n";



       

    }
    return 0;
}