#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int i;
        cin>>i;
        string s;
        cin>>s;
        stack <int> st;
        vector <int>np;
        for (int i=0;i<s.length();i++){
            char c=s[i];
            if (c=='1'){
                st.push(i+1);

            }
            else if (c=='2'){
                if (!st.empty()){
                    st.pop();
                    np.push_back(i+1);
                }
            }


        }


        
        while (!st.empty()) {
        np.push_back(st.top());  
        st.pop();                      
        }
        sort(np.begin(),np.end());
        cout<<np.size()<<"\n";
        for (int i=0;i<np.size();i++){
            cout<<np[i]<<" ";
        }
        //cout<<"\n"


        cout<<"\n";
    }
}