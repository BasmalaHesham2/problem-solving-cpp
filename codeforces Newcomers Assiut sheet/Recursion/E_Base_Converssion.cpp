#include <bits/stdc++.h>
using namespace std;
//#define int long long 
int i=0;
int arr[100000]={0};
void myfun(int n){
    if(n==0){
        return;
    }
    if(n%2==0){
        arr[i]=0;
    }
    else{
        arr[i]=1;
    }
    i++;
    myfun(n/2);

}

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        myfun(n);
        for(int j=i-1;j>=0;j--){
            cout<<arr[j];
        }
        cout<<endl;
        i=0;
    }
    
   
    return 0;
}