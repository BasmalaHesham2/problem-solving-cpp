#include <bits/stdc++.h>
using namespace std;
#define int long long 
int j=1;
void myfun(int n){
    int myst=(j*2)-1;
    int mycon=n-j;
    if(j>n){
        return;
    }
    if(j==n){
          for(int i=0;i<myst;i++){
        cout<<"*";
          }
          return;
    }
    for(int i=0;i<mycon;i++){
        cout<<" ";
    }
    for(int i=0;i<myst;i++){
        cout<<"*";
    }
    j++;
    cout<<endl;
    
    myfun(n);
}
int32_t main(){
int n;cin>>n;
myfun(n);
   
    return 0;
}