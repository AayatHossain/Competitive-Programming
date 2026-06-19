#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++)cin>>b[i];

        int cnt = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(a[i] <= b[i]) continue;
            int j = -1;
            for(int k = i; k < n; k++){
                if(a[k] <= b[i]){
                    j = k;
                    break;
                }
            }
            if(j == -1){
                ok = false;
                break;
            }
            int val = a[j];
            for(int k = j; k > i; k--){
                a[k] = a[k-1];
            }
            a[i] = val;
            cnt += j - i;
        }
        if(ok){
            cout<<cnt<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
