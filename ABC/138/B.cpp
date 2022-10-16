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
    int N;
    cin >>N;
    vector<double>A(N);
    REP(i,N) cin >>A[i];
    double inv1=0,inv2=0;
    REP(i,N) inv1=inv1+1/A[i];
    inv2=1/inv1;
    cout <<inv2<<endl;
    return 0;
}