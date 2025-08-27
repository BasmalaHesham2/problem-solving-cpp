#include <bits/stdc++.h>
using namespace std;
#define int long long 
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int32_t main(){
    int n;cin>>n;
    cout<<fib(n);

    return 0;
}