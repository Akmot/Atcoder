#include<bits/stdc++.h>
#include<string>
#define REP(i,N) for (int i=0;i<(N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

int main(){
    int h, w, x, y;
    cin >>h >>w >>x >>y;
    vector<string> S(h);
    REP(i,h) cin >>S[i];
    --x, --y;
    int ans=1;
    //上方向
    for (int i=x-1;i>=0 && S[i][y] != '#';--i) ++ans;

    //左方向
    for (int i=y-1;i>=0 && S[x][i] != '#';--i) ++ans;
    //右方向
    for (int i=y+1;i<w && S[x][i] != '#';++i) ++ans; 
    //下方向
    for (int i=x+1;i<h && S[i][y] != '#';++i) ++ans;

    cout <<ans<<endl;
}