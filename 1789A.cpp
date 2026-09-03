#include <bits/stdc++.h>

using namespace std;
/*int gcd(int a,int b){
    for (int i=min(a,b);i>=1;i--){
        if (a%i==0 && b%i==0)
        return i;
    }
    return 1;
}*/
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i=0;i<n;i++){
            cin>>vec[i];
        }
        int flag=0;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (gcd(vec[i],vec[j])<=2){
                flag=1;
                break;
                }
            }
            if (flag==1)
            break;
        }
        if (flag == 1){
            cout << "YES" << "\n";
        }        
        else
        cout << "NO" << "\n";

    }
    return 0;
}