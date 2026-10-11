#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        map <char,int> mpp;
        for (int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int len_t=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='0' && mpp['1']>0){
                mpp['1']--;
                len_t++;
            }
            else if (s[i]=='1' && mpp['0']>0){
                mpp['0']--;
                len_t++;
            }
            else
            break;
        }

        cout<<s.size()-len_t<<endl;
        

    }
    return 0;
}