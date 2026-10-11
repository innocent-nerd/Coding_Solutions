#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum=(n*(n+1))/2;
    long long sum1=0;
    vector <long long> vec(n-1);
    for (long long i=0;i<n-1;i++){
        cin>>vec[i];
        sum1+=vec[i];
    }

    cout<<sum-sum1;
}