#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    fastIO();
    string s;cin>>s;
    bool space=true;
    string new_s="";
    for(int i=0;i<s.size();i++){
        if(i+2<s.size()&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            space=true;
            i+=2;
        }
        else{
            if(space){
                new_s+=" ";
            }
            new_s+=s[i];
            space=false;
        }
    }
    cout<<new_s;
   
    return 0;
}