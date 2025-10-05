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
    //G:
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    int freq_s1[256]{0};
    int freq_s2[256]{0};

    for(int i=0;i<s1.size();i++){
        if(s1[i]==' '){
            continue;
        }
        else{
            freq_s1[s1[i]]++;
        }
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]==' '){
            continue;
        }
        else{
            freq_s2[s2[i]]++;
        }
    }
    bool can=true;
    for(int i=0;i<256;i++){
        if(freq_s2[i]>freq_s1[i]){
            can=false;
            break;
        }
    }
    if(can) cout<<"YES\n";
    else cout<<"NO\n";




    return 0;
}