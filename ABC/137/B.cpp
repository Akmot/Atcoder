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
    int K,X;
    cin >>K>>X;
    vector<int>ans(2*K-1);
    REP(i,2*K-1){
        ans[i]=X-K+1+i;
    }
    REP(i,2*K-1) cout <<ans[i]<<' ';
}