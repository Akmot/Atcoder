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
    vector<double>v(N);
    REP(i,N) cin >>v[i];
    //vector<double>val(N);
    sort(ALL(v));
    double val=v[0];
    REP(i,N-1) val=(val+v[i+1])/2;
    cout<<val<<endl;
}