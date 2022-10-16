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
    std::string S, first, other;
    cin >>S;
    first=S[0];
    other=S.substr(1);
    cout <<other+first<<endl;
}