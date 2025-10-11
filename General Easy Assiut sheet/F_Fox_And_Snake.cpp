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
    int n,m;
    cin>>n>>m;
    string arr[n][m];
    int lvl=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            lvl++;
        }
        for(int j=0;j<m;j++){
            if(i%2==0){
                arr[i][j]="#";
                
            }
            else{
                arr[i][j]=".";
                if(lvl%2==0){
                    arr[i][0]="#";
                }
                else{
                    arr[i][m-1]="#";
                }
            }
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ 
            cout<<arr[i][j];
        }
        cout<<endl;
    }

   
    return 0;
}