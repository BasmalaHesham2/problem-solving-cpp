#include <bits/stdc++.h>
using namespace std;
//#define int long long 

void ilove(int n){
    if(n==0){
        return;
    }
    cout<<"I love Recursion\n";
    ilove(n-1);
}
int32_t main(){
    int n; cin>>n;
    ilove(n);
   
    return 0;
}