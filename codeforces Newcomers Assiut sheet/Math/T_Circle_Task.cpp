#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main(){
    int x,y,r;cin>>x>>y>>r;
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        int x1=x-a;
        int y1=y-b;
        int dis=(x1*x1)+(y1*y1);
        if(dis<=r*r){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }

   
    return 0;
}