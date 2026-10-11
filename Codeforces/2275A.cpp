#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long n) {

    if (n < 0) return false; 

    long long root = sqrt(n);

    return (root * root == n);
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int x,y,n;
        cin>>x>>y>>n;
        int fs=0,sec=0;
        int target=n*n;
        for (int i=1;i<=n;i++){
            int fsseq=i*i;
            int secsq=target-fsseq;

            if (isPerfectSquare(secsq)){
                fs=fsseq;
                sec=secsq;
                break;
            }

        }
        fs=sqrt(fs);
        sec=sqrt(sec);

        cout<<x-fs<<" "<<y-sec<<"\n";
    }
}