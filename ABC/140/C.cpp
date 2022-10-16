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
    vector<int> A(N),B(N-1);
    cin >>N;
    REP(i,N-1) cin >>B[i];

    A[0]=B[0];
    A[N-1]=B[N-2];
    for (int i=1; i<N-1; ++i){
        if(B[i-1]<=B[i]){
            A[i]=B[i-1];
        }
        else{
            A[i]=B[i];
        }
    }
    int val=0;
    REP(i,N) val+=A[i];
    cout <<val<<endl;
    return 0;
}