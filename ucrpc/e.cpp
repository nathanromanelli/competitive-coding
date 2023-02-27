#include <bits/stdc++.h>
using namespace std;
 
using vi = vector<int>;
using vd = vector<double>;
using vs = vector<string>;
using vc = vector<char>;
using vll = vector<long long>;
 
#define For(a) for(int i = 0; i < a; ++i)
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define ROF(i,a,b) for(int i = a, i >= b; --i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)x.size()
#define ll long long
#define pb push_back
 
void solve(){
    int n;
    cin >> n;
    unordered_map<int,int> map;
    For(n){
        int a;
        cin >> a;
        map[a]++;
    }
    vector<vi> a;
    for (auto i : map){
        vi b;
        int a1 = i.first, b1 = i.second;
        b.pb(a1);
        b.pb(b1);
        a.pb(b);
    }
    sort(all(a));
    For(sz(a)){
        cout << a[i][0] << " " << a[i][1] << endl;
    }
}
 
const int mod = (1e9 + 7);
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    For(t){
        //cout << "Case #" << i + 1 << ": ";
        solve();
    }
    return 0;
}

//Check for initialized variables, overflow, and edge cases
//chillytemplate.cpp!!1!