#include <bits/stdc++.h>

using namespace std;
int dx[]={-1,1,-1,1};
int dy[]={-1,1,1,-1};
int main() {

    int t;
    cin >> t;
    while (t--) {
        int a,b,qx,qy,kx,ky;
        cin>>a>>b>>kx>>ky>>qx>>qy;
        set<pair<int,int>> king_hit,qween_hit;
        for (int j=0;j<4;j++){
            king_hit.insert({a*dx[j]+kx,b*dy[j]+ky});
            king_hit.insert({b*dx[j]+kx,a*dy[j]+ky});

            qween_hit.insert({a*dx[j]+qx,b*dy[j]+qy});
            qween_hit.insert({b*dx[j]+qx,a*dy[j]+qy});
        }
        
        int ans=0;
        for (auto it: king_hit){
            if (qween_hit.find(it)!=qween_hit.end()){
                ans++;
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}