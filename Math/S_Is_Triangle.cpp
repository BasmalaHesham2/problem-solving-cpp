#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main(){
    int a,b,c;cin>>a>>b>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"Valid\n";
        double s=(a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));

        cout<<fixed<<setprecision(6)<<area;

    }
    else cout<<"Invalid";
   
    return 0;
}