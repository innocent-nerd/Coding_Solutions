#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if (y2<y1){
            cout<<"-1\n";
            continue;
        }

        int dif=y2-y1;
         x1+=dif;

        if (x1<x2){
            cout<<"-1\n";
            continue;
        }
        
        dif = dif + abs(x2-x1);
        cout<<dif<<endl;
        
        
        

    }
    return 0;
}