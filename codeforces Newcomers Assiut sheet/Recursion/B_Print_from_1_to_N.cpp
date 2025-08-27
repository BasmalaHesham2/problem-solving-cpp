#include <bits/stdc++.h>
using namespace std;
//#define int long long 

int counter=1;
void from1(int n){
    if(n==0){
        return;
    }
    cout<<counter++<<endl;
    from1(n-1);
}
int32_t main(){
    int n;cin>>n;
    from1(n);
   
    return 0;
}