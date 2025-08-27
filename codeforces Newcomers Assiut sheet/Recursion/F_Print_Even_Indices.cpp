#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n;
void myfun(int arr[],int i){
    if(i<0){
        return;
    }
    if(i%2==0||i==0){
        cout<<arr[i]<<" ";
    }
    i--;
    myfun(arr,i);

}
int32_t main(){
    cin>>n;
    int arr[n];
    int i=n-1;
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    myfun(arr,i);
   
    return 0;
}