#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;

        
        if (y-x>1){
            cout<<-1<<"\n";
        }
        else if (x%2==y%2){
            cout<<x<<"\n";
        }else 
        cout<<x+1<<"\n";
    }
}