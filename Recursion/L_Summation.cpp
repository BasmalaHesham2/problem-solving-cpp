#include <bits/stdc++.h>
using namespace std;
#define int long long 
int summ=0;
int i=0;
void myfun(int arr[],int n){
    if(i>=n){
        return;
    }
    summ+=arr[i];
    i++;
    myfun(arr,n);
}
int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   myfun(arr,n);
   cout<<summ;
    return 0;
}