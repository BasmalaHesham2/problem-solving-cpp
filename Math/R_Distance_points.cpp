#include <bits/stdc++.h>
using namespace std;
#define int long long 
double thepow(double n1,double n2){
        double num= n2-n1;
        return pow(num,2);
}
int32_t main(){

    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double n1 = thepow(x1,x2);
    double n2 = thepow(y1,y2);
    double ans= sqrt(n1+n2);
    cout<<fixed<<setprecision(9)<<ans;
   
    return 0;
}