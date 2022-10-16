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
    int a, b, c;
    cin >>a >>b >>c;
    
    if (a == b) {
        cout << c << endl;

    } else if (b == c) {
        cout << a << endl;

    } else if (a == c) {
        cout << b << endl;

    } else {
        cout << 0 << endl;
    }
    return 0;
}