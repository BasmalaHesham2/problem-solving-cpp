#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void myfun(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    int k,n;cin>>n>>k;
    string s;
    cin>>s;
    vi freq(27);
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }

    int last=0;
    for(int i=0;i<27;i++){
        if(k>=freq[i]){
            k-=freq[i];
            last=i;
        }
        else{
            last=i;
            break;
        }
    }

    for (int i=0;i<n;i++){
        if(k==0){
            if((s[i]-'a')>=last){
                cout<<s[i];
            }
        }
        else{
            if((s[i]-'a')==last ){
        
                if(k>0){
                    k--;
                }
                else{
                    cout<<s[i];
                }
            }
            if(s[i]-'a'>last){
                cout<<s[i];
            }
        }
    }
    
    
   
    return 0;
}