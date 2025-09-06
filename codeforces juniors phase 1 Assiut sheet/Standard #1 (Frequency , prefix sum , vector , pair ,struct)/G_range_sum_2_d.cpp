#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}

vector<vi> prefixsum2d(int n, int m, vector<vi> &mat) {
    vector<vi> premat(n+1, vi(m+1, 0));

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            premat[i][j] = mat[i][j]
                          + premat[i-1][j]
                          + premat[i][j-1]
                          - premat[i-1][j-1];
        }
    }
    return premat;
}


int sumofsquare(int x1,int y1,int x2,int y2,vector<vi> &premat){
    return premat[x2][y2]
         - premat[x1-1][y2]
         - premat[x2][y1-1]
         + premat[x1-1][y1-1];
}

int32_t main() {


    int n,m,q;
    cin >> n >> m >> q;

    vector<vi> mat(n+1, vi(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> mat[i][j];
        }
    }

    vector<vi> premat = prefixsum2d(n,m,mat);

    while(q--){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sumofsquare(x1,y1,x2,y2,premat) << "\n";
    }

    return 0;
}