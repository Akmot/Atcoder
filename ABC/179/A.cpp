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
    string S;
    cin >> S;
    string out;
    int a;
    a=S.size()
    if (S[a-1] =="s"){
        out=S+'es'
    }else{
        out=S+'s'
    }
    cout << out <<endl;
}