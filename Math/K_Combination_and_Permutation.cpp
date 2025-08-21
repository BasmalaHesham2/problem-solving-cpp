#include <bits/stdc++.h>
using namespace std;
#define int long long 
int factorial(int n){
    int result=1;
    if (n==0){
        return 1;
    }
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}
int32_t main(){
    int n,nn;cin>>n>>nn;

    cout<<(factorial(n)/(factorial(nn)*factorial(n-nn)))<<" "<<(factorial(n)/factorial(n-nn));
   
    return 0;
}