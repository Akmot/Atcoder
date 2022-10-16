#include<bits/stdc++.h>
#define REP(i,N) for (int i=1;i<(N+1); ++i)
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
    int val;
    int login;
    int cou;
    REP(i,N){
        login=log10(i);
        if(login<0){
            login=0;
        };
        val=1+login;
        cou+=val;
    };
    int result;
    result=cou/3;
    cout<<result<<endl;

}
/* 実施せず */
