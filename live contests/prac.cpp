#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        int ans = INT_MAX;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++){
            int j = 0, k = n-1;
            int cnt = 0;
            while(j < k ){
                if(a[j] == a[i] && j < i){
                    j++;
                }else if(a[k]==a[i] && k > i){
                    k--;
                }else if(j==i && k > i){
                    k--;
                    cnt++;
                    
                }else if(k==i && j < i){
                    j++;
                    cnt++;
                }else{
                    j++;
                    k--;
                    cnt++;
                }
            }
            ans = min(ans, cnt);
        }
        cout<<ans<<endl;
    }
}