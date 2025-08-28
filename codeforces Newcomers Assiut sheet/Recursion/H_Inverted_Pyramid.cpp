#include <bits/stdc++.h>
using namespace std;
#define int long long 

int n;
void myfun(int m){
    int numstar=(m*2)-1;
    int numspace=n-m;
    if(m<=0){
        return;
    }
    for(int i=0;i<numspace;i++){
        cout<<" ";
    }

    for(int i=0;i<numstar;i++){
        cout<<"*";
    }
    cout<<endl;
    m--;
    myfun(m);

}
int32_t main(){
    cin>>n;
    myfun(n);
   
    return 0;
}