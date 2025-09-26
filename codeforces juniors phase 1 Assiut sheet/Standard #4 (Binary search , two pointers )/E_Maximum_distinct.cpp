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
   int n,k;cin>>n>>k;
   string s;
   cin>>s;

   map<char,int> mp;
   for(int i=0;i<k;i++){
        mp[s[i]]++;
   }
   int max_distinct=mp.size();
   for(int i=0;i<n-1-k;i++){
    mp[s[i+k]]++;
    mp[s[i]]--;
    if(mp[s[i]]==0) mp.erase(s[i]);
    int curr=mp.size();
    max_distinct=max(max_distinct,curr);
   }
   
   cout<<max_distinct;

    return 0;
}