#include <bits/stdc++.h>
using namespace std;
#define int long long 

int sum(int num){
    return num*(num+1);
}
 
int32_t main(){
    int n1,n2,x;cin>>n1>>n2>>x; 
    int maxx,minn;
    if(n1>n2){
        maxx=n1;
        minn=n2;
    }
    else {
        maxx=n2; 
        minn=n1;
    }

    int tot= (sum(maxx/x)*x)-(sum((minn-1)/x)*x);
    cout<<tot/2;

    return 0;
}