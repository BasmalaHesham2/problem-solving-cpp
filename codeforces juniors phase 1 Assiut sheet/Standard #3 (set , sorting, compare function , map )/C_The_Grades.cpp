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
struct myst{
    string name;
    vi grades;
    int totalgrades;
};

bool cmp(myst st1,myst st2){
    if(st1.totalgrades-st2.totalgrades>10) return true;
    if(st2.totalgrades-st1.totalgrades>10) return false;
    else return st1.name<st2.name;
}

int32_t main(){
    myfun();
    int n;cin>>n;
    vector<myst> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].name;
        v[i].grades.resize(4);
        for(int j=0;j<4;j++){
            cin>>v[i].grades[j];
            v[i].totalgrades+=v[i].grades[j];
        }
    }

    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].name<<" "<<v[i].totalgrades<<" "<<v[i].grades<<endl;
    }

   
    return 0;
}