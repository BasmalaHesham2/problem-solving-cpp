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
int n;
struct myst{
    string name;
    vi grades;
    int totalgrade;

};
bool cmp(myst x, myst y){

    if(x.totalgrade > y.totalgrade) return true;

    else if(x.totalgrade < y.totalgrade) return false;

    else return x.name<y.name;

}

int32_t main(){
    cin>>n;
    vector <myst> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].name;
        p[i].grades.resize(4);
        for(int j=0;j<4;j++){
            cin>>p[i].grades[j];
            p[i].totalgrade+=p[i].grades[j];
        }
    }

    sort(p.begin(),p.end(),cmp);
    
    for(myst x : p){
        cout<<x.name<<" "<<x.totalgrade<<" "<<x.grades<<endl;
    }
   
    return 0;
}