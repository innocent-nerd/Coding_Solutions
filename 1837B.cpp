#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        //stack <char> ch;
        int n;
        cin>>n;
        string vec;
        cin>>vec;
        //ch.push()
        int count=1;
        int max=1;
        for (int i=1;i<n;i++){
            if (vec[i-1]!=vec[i]){
                count=1;

            }
            else{
                count++;
                if (count>max)
                max=count;
            }
        }

        cout<<max+1<<"\n";
    }
}