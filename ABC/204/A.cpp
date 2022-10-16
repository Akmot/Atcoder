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
    int x, y;
    cin >>x >>y;

    int z;
    if (x == y) {
        z = x;
    } else if ((x + y) == 1) {
        z = 2;
    } else if ((x + y) == 2) {
        z = 1;
    } else {
        z = 0;
    }
    cout <<z<<endl;
}