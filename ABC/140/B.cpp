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
    int N,j;
    cin >>N;
    vector<int> A(N),B(N),C(N-1);
    REP(i,N) cin >>A[i];
    REP(i,N) cin >>B[i];
    REP(i,N) cin >>C[i];

    int val=0;
    REP(i,N){
        int k=A[i]-1;
        val+=B[k];
        if(A[i+1]==A[i]+1){
            val+=C[k];
        }
    }
    cout <<val<<endl;
    return 0;
}