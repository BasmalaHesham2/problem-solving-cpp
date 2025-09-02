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
    int n,k;cin>>n>>k;
    vi num(n);
    vi team(k);
    cin>>num;
    vi freq(100+3);
    for(int x : num){
        freq[x]++;
    }

   bool fit=false;
    int j=0;
    for(int i=0;i<104;i++){
        if(freq[i]>=1){
            if(k==0){
                fit=true;
                break;
            }
            team[j]=i;
            j++;
            k--;
        }
    }
    
    
    
    if(fit){
        cout<<"YES\n";
        for(int i=0;i<size(team);i++){
            for(int j=0;j<n;j++){
                if(team[i]==num[j]){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
    }
    else{
        cout<<"NO";
    }
   
    return 0;
}

