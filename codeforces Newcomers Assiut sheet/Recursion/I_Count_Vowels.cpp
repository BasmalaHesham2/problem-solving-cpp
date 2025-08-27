#include <bits/stdc++.h>
using namespace std;
#define int long long 
int i=1;
int countt=0;
void myfun(string s){
    if(size(s)==0){
        return;
    }
    if(s[0]=='a'||s[0]=='A'||s[0]=='e'||s[0]=='E'||s[0]=='i'||s[0]=='I'||s[0]=='o'||s[0]=='O'||s[0]=='u'||s[0]=='U'){
        countt++;
    }
    
    s=s.substr(i,size(s));
    myfun(s);
}
int32_t main(){
    string s;getline(cin,s);
    myfun(s);
    cout<<countt;
   
    return 0;
}