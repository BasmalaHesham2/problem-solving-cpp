#include <bits/stdc++.h>
using namespace std;
//#define int long long 

void fromn(int n){
    if(n==0){
        return;
    }
    if(n-1==0){
        cout<<n;
    }
    else{
        cout<<n<<" ";
    }
    fromn(n-1);
}
int32_t main(){

   int n;
   cin>>n;
   fromn(n);
    return 0;
}