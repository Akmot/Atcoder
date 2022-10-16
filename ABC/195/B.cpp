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
    int A, B, W;
    cin >>A >>B >>W;
    int N, max, min;
    N=W*1000;
    if(N%A==0){
        max=N/A;
    };
    if(N%B==0){
        min=N/B;
    };

    
}