#include <bits/stdc++.h>
using namespace std;
#define int long long 
string st="";
void myfun(int n){
    if(n==0){
        return;
    }
    cout<<st[0]<<" ";
    st=st.substr(1,(size(st)-1));
    myfun(size(st));
}

int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    st=to_string(n);
    myfun(size(st));
    cout<<endl;
}
   
    return 0;
}