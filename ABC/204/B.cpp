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
    cin >>n;

    vector<int> a(n);
    REP(i,n) cin >>a[i];

    int res = 0;
    REP(i,n){
        if (a[i] > 10) {
            res += a[i] - 10;
        }
    }

    cout << res << endl;
}