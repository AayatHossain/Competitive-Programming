#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++){
            cin>>a[i];
        }
        int mn = a[0];
        int sum = mn;
        for(int i = 1; i < n; i++){
            if(a[i] < mn){
                mn = a[i];
            }
            sum += mn;
        }
        cout<<sum<<endl;
    }
    return 0;
}