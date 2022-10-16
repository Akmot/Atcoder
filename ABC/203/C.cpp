#include<bits/stdc++.h>
#define REP(i,N) for (int i=0;i<(N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

int main(){
    int n;
    ll k;
    ll x, y;
    cin >>n >> k;

    vector<pair<ll, ll>> a;
    REP(i,n) {
        cin >>x >>y;
        a.push_back({x,y});
    }

    sort(ALL(a));
    REP(i,n) {
        if (a[i].first > k) {
            break;
        }
        k += a[i].second;
    }
    

    cout << k << endl;
    return 0;
}