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
bool getbit(int n,int x){
    return (n&1<<x);
}
int32_t main(){
    fastIO();
    int n;cin>>n;
    vi s(n);
    cin>>s;
    vector<vector<int>> ans;
    for(int mask=0;mask<(1<<n);mask++){
        vi v;
        for(int i=0;i<n;i++){
            if(getbit(mask,i)==1){
                v.push_back(s[i]);
            }
        }
        ans.push_back(v);
    }

    sort(ans.begin(),ans.end());

    for(auto&it:ans){
	for(auto i:it){
		cout<<i<<" ";
	}
	cout<<endl;
}
   
    return 0;
}