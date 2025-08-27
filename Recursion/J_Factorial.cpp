#include <bits/stdc++.h>
using namespace std;
#define int long long 
int myfun(int n){
    if(n==1){
        return 1;
    }
    return myfun(n-1)*n;
}
int32_t main(){
    int n;cin>>n;
    cout<<myfun(n);
   
    return 0;
}